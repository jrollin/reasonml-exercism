let twoFer = msg => {
    switch (msg) {
        | None => "One for you, one for me."
        | Some(msg) => "One for "++ msg ++", one for me."
    };
}