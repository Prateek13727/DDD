type t =
  | Sufficient
  | AlmostExhausted
  | Exhausted;

let from_string = (level: string): t =>
  switch (level) {
  | "Sufficient" => Sufficient
  | "AlmostExhausted" => AlmostExhausted
  | "Exhausted" => Exhausted
  | _ => raise(Not_found)
};