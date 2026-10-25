# Security Policy

NocturneDecomp is a personal project, maintained in spare time and shared as is. Security reports are
still welcome.

## Supported versions

Fixes go to the default branch and ship in the next release. Only the latest release and the
default branch are supported; there are no backports.

## Reporting a vulnerability

**Please don't open a public issue.** Report it privately through GitHub instead:

**[Report a vulnerability](https://github.com/NearlyTRex/NocturneDecomp/security/advisories/new)**
(the repository's **Security** tab → **Report a vulnerability**)

That opens a private advisory only you and the maintainer can see. Please include:

- what is affected: the file, command or component, and the version or commit
- what an attacker could do, and what they would need first
- steps to reproduce it, or a proof of concept

Don't put real secrets in a report, yours or anyone else's. A redacted value or a made-up one
shows the problem just as well.

Reports are answered on a best-effort basis. Once a fix is ready, the advisory is published with
credit to the reporter, unless you'd rather not be named.

## Scope

**In scope:** everything in this repository.

**Out of scope:**

- flaws in third-party dependencies and the programs this project installs (report those to
  their own projects)
- attacks that need code already running as the user
