type color =
  | Black
  | Brown
  | Red
  | Orange
  | Yellow
  | Green
  | Blue
  | Violet
  | Grey
  | White;

let colorCode = color => {
  switch color {
  | Black => 0
  | White => 9
  | Orange => 3
  };
}
