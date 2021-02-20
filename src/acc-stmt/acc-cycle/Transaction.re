type t = 
  | Debits(DebitTransaction.t)
  | Credits(CreditTransaction.t)