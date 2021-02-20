type t =
  | Permissible
  | AlmostExceeded
  | Exceeded;

let level_from_string = (level: string): t => {
  switch (level) {
  | "Permissible" => Permissible
  | "AlmostExceeded" => AlmostExceeded
  | "Exceeded" => Exceeded
  | _ => raise(Not_found)
  };
};