open Jest;
open Expect;

describe("MyTestComponent", () => {
  test("1 + 2 toBe 3", () =>
    expect(1 + 2) |> toBe(3))
});