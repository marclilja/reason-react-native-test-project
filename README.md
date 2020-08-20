# reason-react-native-test-project

Develop React Native with ReasonML. This will give you a React Native app called ReNative. Good for playing around, but you should probably follow the official template installation if you want to name you app something different. 

## Prerequisites (Mac OS + iOS)
* Install Homebrew
* Install Node.js (10 or higher, manually, Homebrew or nvm)
* Install Watchman: `brew install watchman`
* Install Xcode + Xcode CLI tools (Xcode > Preferences ...)
* Install iOS simulator (Xcode > Preferences ...)
* Install CocoaPods: `sudo gem install cocoapods`
* Clone repo and `yarn install`

## Build (ReasonML to js)

### IDE
VS Code can automatically build your .re files to .bs.js with this extension: [Reason Language Server](https://marketplace.visualstudio.com/items?itemName=jaredly.reason-vscode)

Seems flimsy though...

### CLI
`yarn re:build` or `yarn re:watch` to watch for changes

## Test
Testing with Jest, react-test-renderer and bs-jest (Write Jest tests in Reason). (There are React bindings for testing-library, but not yet for React Native).

`yarn test` or `yarn test:watch`

`yarn test -u` to create new snapshots

## Run

iOS simulator `yarn ios` or just `yarn start`if the application is already built to the simulator

## Typical workflow

in a terminal `yarn re:watch`

in another terminal `yarn test:watch`

in another terminal `yarn ios` or `yarn start`

## Docs
[ReasonML](https://reasonml.github.io/en/)

[Reason React](https://reasonml.github.io/reason-react/)

[Reason React Native](https://reason-react-native.github.io/en/docs/)

[BuckleScript => ReScript](https://rescript-lang.org/)
