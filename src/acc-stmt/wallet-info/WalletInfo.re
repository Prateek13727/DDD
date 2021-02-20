type t =
  | CreditWalletInfo(CreditWalletInfo.t, WalletBalance.t)
  | CashWalletInfo(CashWalletInfo.t, WalletBalance.t);
