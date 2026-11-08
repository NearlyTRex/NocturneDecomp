; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004aa9d0(int *param_1,undefined4 param_2)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004d6420 at 004d65a8
;
; Referenced Globals:
;   TerminatedCString s_CEventList_version_005deeaf
;   undefined4 DAT_005deec6
;   TerminatedCString s_eventCount_list_005deeca
;   undefined4 DAT_005deedf
;   undefined4 DAT_005deee3
;   TerminatedCString s_currentEventCount_list_005deee7
;   undefined4 DAT_005def03
;   undefined4 DAT_005def07
;   TerminatedCString s_persistentEventCount_lis_005def0b
;   undefined4 DAT_005def2a
;   undefined4 DAT_005def2e
;   TerminatedCString s_timerCount_list_duration_005def32
;   undefined4 DAT_005def57
;   TerminatedCString s_f_s_005def5b
;   TerminatedCString s_counterCount_list_value_005def63
;   ... and 8 more
;
; Called Functions:
;   FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa9d0
        ;   Label: FUN_004aa9d0
    PUSH ESI                            ; 004aa9d1
    PUSH EDI                            ; 004aa9d2
    PUSH EBP                            ; 004aa9d3
    SUB ESP,0xc                         ; 004aa9d4
    MOV EBX,dword ptr [ESP + 0x20]      ; 004aa9d7
    MOV ESI,dword ptr [ESP + 0x24]      ; 004aa9db
    PUSH 0x5deeaf                       ; 004aa9df | = "// CEventList version\n"
    PUSH ESI                            ; 004aa9e4
    CALL FUN_005c03c0                   ; 004aa9e5
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x8                         ; 004aa9ea
    PUSH 0x5                            ; 004aa9ed
    PUSH 0x5deec6                       ; 004aa9ef | DAT_005deec6
    PUSH ESI                            ; 004aa9f4
    CALL FUN_005c03c0                   ; 004aa9f5
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0xc                         ; 004aa9fa
    PUSH 0x5deeca                       ; 004aa9fd | = "// eventCount, list\n"
    PUSH ESI                            ; 004aaa02
    CALL FUN_005c03c0                   ; 004aaa03
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x8                         ; 004aaa08
    MOV EDX,dword ptr [EBX]             ; 004aaa0b
    PUSH EDX                            ; 004aaa0d
    PUSH 0x5deedf                       ; 004aaa0e | DAT_005deedf
    PUSH ESI                            ; 004aaa13
    XOR EBP,EBP                         ; 004aaa14
    CALL FUN_005c03c0                   ; 004aaa16
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    MOV ECX,dword ptr [EBX]             ; 004aaa1b
    ADD ESP,0xc                         ; 004aaa1d
    TEST ECX,ECX                        ; 004aaa20
    JLE 0x004aaa40                      ; 004aaa22
        ;   XREF to: 004aaa40 (CONDITIONAL_JUMP)  ; LAB_004aaa40
    LEA EDI,[EBX + 0x4]                 ; 004aaa24
    PUSH EDI                            ; 004aaa27
        ;   Label: LAB_004aaa27
    PUSH 0x5deee3                       ; 004aaa28 | DAT_005deee3
    PUSH ESI                            ; 004aaa2d
    INC EBP                             ; 004aaa2e
    ADD EDI,0x20                        ; 004aaa2f
    CALL FUN_005c03c0                   ; 004aaa32
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    MOV EAX,dword ptr [EBX]             ; 004aaa37
    ADD ESP,0xc                         ; 004aaa39
    CMP EBP,EAX                         ; 004aaa3c
    JL 0x004aaa27                       ; 004aaa3e
        ;   XREF to: 004aaa27 (CONDITIONAL_JUMP)  ; LAB_004aaa27
    PUSH 0x5deee7                       ; 004aaa40 | = "// currentEventCount, list\n"
        ;   Label: LAB_004aaa40
    PUSH ESI                            ; 004aaa45
    CALL FUN_005c03c0                   ; 004aaa46
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x8                         ; 004aaa4b
    MOV EDX,dword ptr [EBX + 0xc84]     ; 004aaa4e
    PUSH EDX                            ; 004aaa54
    PUSH 0x5def03                       ; 004aaa55 | DAT_005def03
    PUSH ESI                            ; 004aaa5a
    XOR EDI,EDI                         ; 004aaa5b
    CALL FUN_005c03c0                   ; 004aaa5d
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    MOV ECX,dword ptr [EBX + 0xc84]     ; 004aaa62
    ADD ESP,0xc                         ; 004aaa68
    TEST ECX,ECX                        ; 004aaa6b
    JLE 0x004aaaa0                      ; 004aaa6d
        ;   XREF to: 004aaaa0 (CONDITIONAL_JUMP)  ; LAB_004aaaa0
    LEA EBP,[EBX + 0xc88]               ; 004aaa6f
    PUSH EBP                            ; 004aaa75
        ;   Label: LAB_004aaa75
    PUSH 0x5def07                       ; 004aaa76 | DAT_005def07
    PUSH ESI                            ; 004aaa7b
    INC EDI                             ; 004aaa7c
    ADD EBP,0x20                        ; 004aaa7d
    CALL FUN_005c03c0                   ; 004aaa80
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    MOV EAX,dword ptr [EBX + 0xc84]     ; 004aaa85
    ADD ESP,0xc                         ; 004aaa8b
    CMP EDI,EAX                         ; 004aaa8e
    JL 0x004aaa75                       ; 004aaa90
        ;   XREF to: 004aaa75 (CONDITIONAL_JUMP)  ; LAB_004aaa75
    LEA EAX,[EAX]                       ; 004aaa92
    LEA EDX,[EDX]                       ; 004aaa98
    MOV EAX,EAX                         ; 004aaa9e
    PUSH 0x5def0b                       ; 004aaaa0 | = "// persistentEventCount, list\n"
        ;   Label: LAB_004aaaa0
    PUSH ESI                            ; 004aaaa5
    CALL FUN_005c03c0                   ; 004aaaa6
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x8                         ; 004aaaab
    MOV EDX,dword ptr [EBX + 0x258c]    ; 004aaaae
    PUSH EDX                            ; 004aaab4
    PUSH 0x5def2a                       ; 004aaab5 | DAT_005def2a
    PUSH ESI                            ; 004aaaba
    XOR EBP,EBP                         ; 004aaabb
    CALL FUN_005c03c0                   ; 004aaabd
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    MOV ECX,dword ptr [EBX + 0x258c]    ; 004aaac2
    ADD ESP,0xc                         ; 004aaac8
    TEST ECX,ECX                        ; 004aaacb
    JLE 0x004aab00                      ; 004aaacd
        ;   XREF to: 004aab00 (CONDITIONAL_JUMP)  ; LAB_004aab00
    LEA EDI,[EBX + 0x2590]              ; 004aaacf
    PUSH EDI                            ; 004aaad5
        ;   Label: LAB_004aaad5
    PUSH 0x5def2e                       ; 004aaad6 | DAT_005def2e
    PUSH ESI                            ; 004aaadb
    INC EBP                             ; 004aaadc
    ADD EDI,0x20                        ; 004aaadd
    CALL FUN_005c03c0                   ; 004aaae0
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    MOV EAX,dword ptr [EBX + 0x258c]    ; 004aaae5
    ADD ESP,0xc                         ; 004aaaeb
    CMP EBP,EAX                         ; 004aaaee
    JL 0x004aaad5                       ; 004aaaf0
        ;   XREF to: 004aaad5 (CONDITIONAL_JUMP)  ; LAB_004aaad5
    LEA EAX,[EAX]                       ; 004aaaf2
    LEA EDX,[EDX]                       ; 004aaaf8
    MOV EAX,EAX                         ; 004aaafe
    PUSH 0x5def32                       ; 004aab00 | = "// timerCount, list(duration, name)\n"
        ;   Label: LAB_004aab00
    PUSH ESI                            ; 004aab05
    CALL FUN_005c03c0                   ; 004aab06
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x8                         ; 004aab0b
    MOV EDX,dword ptr [EBX + 0x3210]    ; 004aab0e
    PUSH EDX                            ; 004aab14
    PUSH 0x5def57                       ; 004aab15 | DAT_005def57
    PUSH ESI                            ; 004aab1a
    CALL FUN_005c03c0                   ; 004aab1b
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0xc                         ; 004aab20
    XOR ECX,ECX                         ; 004aab23
    MOV EDI,dword ptr [EBX + 0x3210]    ; 004aab25
    MOV dword ptr [ESP + 0x4],ECX       ; 004aab2b
    TEST EDI,EDI                        ; 004aab2f
    JLE 0x004aab70                      ; 004aab31
        ;   XREF to: 004aab70 (CONDITIONAL_JUMP)  ; LAB_004aab70
    LEA EBP,[EBX + 0x3214]              ; 004aab33
    MOV EDI,EBX                         ; 004aab39
    PUSH EBP                            ; 004aab3b
        ;   Label: LAB_004aab3b
    SUB ESP,0x8                         ; 004aab3c
    FLD float ptr [EDI + 0x3354]        ; 004aab3f
    FSTP double ptr [ESP]               ; 004aab45
    PUSH 0x5def5b                       ; 004aab48 | = "%f, %s\n"
    PUSH ESI                            ; 004aab4d
    CALL FUN_005c03c0                   ; 004aab4e
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x14                        ; 004aab53
    ADD EDI,0x4                         ; 004aab56
    MOV EAX,dword ptr [ESP + 0x4]       ; 004aab59
    ADD EBP,0x20                        ; 004aab5d
    INC EAX                             ; 004aab60
    MOV EDX,dword ptr [EBX + 0x3210]    ; 004aab61
    MOV dword ptr [ESP + 0x4],EAX       ; 004aab67
    CMP EAX,EDX                         ; 004aab6b
    JL 0x004aab3b                       ; 004aab6d
        ;   XREF to: 004aab3b (CONDITIONAL_JUMP)  ; LAB_004aab3b
    NOP                                 ; 004aab6f
    PUSH 0x5def63                       ; 004aab70 | = "// counterCount, list(value, name)\n"
        ;   Label: LAB_004aab70
    PUSH ESI                            ; 004aab75
    CALL FUN_005c03c0                   ; 004aab76
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x8                         ; 004aab7b
    MOV ECX,dword ptr [EBX + 0x337c]    ; 004aab7e
    PUSH ECX                            ; 004aab84
    PUSH 0x5def87                       ; 004aab85 | DAT_005def87
    PUSH ESI                            ; 004aab8a
    XOR EDI,EDI                         ; 004aab8b
    CALL FUN_005c03c0                   ; 004aab8d
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0xc                         ; 004aab92
    MOV EBP,dword ptr [EBX + 0x337c]    ; 004aab95
    MOV dword ptr [ESP + 0x8],EDI       ; 004aab9b
    TEST EBP,EBP                        ; 004aab9f
    JLE 0x004aabe0                      ; 004aaba1
        ;   XREF to: 004aabe0 (CONDITIONAL_JUMP)  ; LAB_004aabe0
    LEA EDI,[EBX + 0x3380]              ; 004aaba3
    MOV EBP,EBX                         ; 004aaba9
    PUSH EDI                            ; 004aabab
        ;   Label: LAB_004aabab
    MOV EAX,dword ptr [EBP + 0x34c0]    ; 004aabac
    PUSH EAX                            ; 004aabb2
    PUSH 0x5def8b                       ; 004aabb3 | = "%d, %s\n"
    PUSH ESI                            ; 004aabb8
    CALL FUN_005c03c0                   ; 004aabb9
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x10                        ; 004aabbe
    ADD EBP,0x4                         ; 004aabc1
    MOV EDX,dword ptr [ESP + 0x8]       ; 004aabc4
    ADD EDI,0x20                        ; 004aabc8
    INC EDX                             ; 004aabcb
    MOV ECX,dword ptr [EBX + 0x337c]    ; 004aabcc
    MOV dword ptr [ESP + 0x8],EDX       ; 004aabd2
    CMP EDX,ECX                         ; 004aabd6
    JL 0x004aabab                       ; 004aabd8
        ;   XREF to: 004aabab (CONDITIONAL_JUMP)  ; LAB_004aabab
    LEA EAX,[EAX]                       ; 004aabda
    PUSH 0x5def93                       ; 004aabe0 | = "// actorVarCount, list(varName, actor..."
        ;   Label: LAB_004aabe0
    PUSH ESI                            ; 004aabe5
    CALL FUN_005c03c0                   ; 004aabe6
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x8                         ; 004aabeb
    MOV EDI,dword ptr [EBX + 0x34e8]    ; 004aabee
    PUSH EDI                            ; 004aabf4
    PUSH 0x5defbf                       ; 004aabf5 | DAT_005defbf
    PUSH ESI                            ; 004aabfa
    XOR EBP,EBP                         ; 004aabfb
    CALL FUN_005c03c0                   ; 004aabfd
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 004aac02
    ADD ESP,0xc                         ; 004aac08
    TEST EAX,EAX                        ; 004aac0b
    JLE 0x004aac50                      ; 004aac0d
        ;   XREF to: 004aac50 (CONDITIONAL_JUMP)  ; LAB_004aac50
    LEA EAX,[EBX + 0x37da]              ; 004aac0f
    LEA EDI,[EBX + 0x34ec]              ; 004aac15
    MOV dword ptr [ESP],EAX             ; 004aac1b
    MOV EDX,dword ptr [ESP]             ; 004aac1e
        ;   Label: LAB_004aac1e
    PUSH EDX                            ; 004aac21
    PUSH EDI                            ; 004aac22
    PUSH 0x5defc3                       ; 004aac23 | = "\"%s\", \"%s\"\n"
    PUSH ESI                            ; 004aac28
    CALL FUN_005c03c0                   ; 004aac29
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x10                        ; 004aac2e
    INC EBP                             ; 004aac31
    MOV ECX,dword ptr [ESP]             ; 004aac32
    ADD EDI,0x1e                        ; 004aac35
    ADD ECX,0x1e                        ; 004aac38
    MOV EAX,dword ptr [EBX + 0x34e8]    ; 004aac3b
    MOV dword ptr [ESP],ECX             ; 004aac41
    CMP EBP,EAX                         ; 004aac44
    JL 0x004aac1e                       ; 004aac46
        ;   XREF to: 004aac1e (CONDITIONAL_JUMP)  ; LAB_004aac1e
    LEA EAX,[EAX]                       ; 004aac48
    MOV EDX,EDX                         ; 004aac4e
    PUSH 0x5defcf                       ; 004aac50 | = "// gameFlagCount, list\n"
        ;   Label: LAB_004aac50
    PUSH ESI                            ; 004aac55
    CALL FUN_005c03c0                   ; 004aac56
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x8                         ; 004aac5b
    MOV EDX,dword ptr [EBX + 0x1908]    ; 004aac5e
    PUSH EDX                            ; 004aac64
    PUSH 0x5defe7                       ; 004aac65 | DAT_005defe7
    PUSH ESI                            ; 004aac6a
    XOR EBP,EBP                         ; 004aac6b
    CALL FUN_005c03c0                   ; 004aac6d
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    MOV ECX,dword ptr [EBX + 0x1908]    ; 004aac72
    ADD ESP,0xc                         ; 004aac78
    TEST ECX,ECX                        ; 004aac7b
    JLE 0x004aacb0                      ; 004aac7d
        ;   XREF to: 004aacb0 (CONDITIONAL_JUMP)  ; LAB_004aacb0
    LEA EDI,[EBX + 0x190c]              ; 004aac7f
    PUSH EDI                            ; 004aac85
        ;   Label: LAB_004aac85
    PUSH 0x5defeb                       ; 004aac86 | DAT_005defeb
    PUSH ESI                            ; 004aac8b
    INC EBP                             ; 004aac8c
    ADD EDI,0x20                        ; 004aac8d
    CALL FUN_005c03c0                   ; 004aac90
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    MOV EAX,dword ptr [EBX + 0x1908]    ; 004aac95
    ADD ESP,0xc                         ; 004aac9b
    CMP EBP,EAX                         ; 004aac9e
    JL 0x004aac85                       ; 004aaca0
        ;   XREF to: 004aac85 (CONDITIONAL_JUMP)  ; LAB_004aac85
    LEA EAX,[EAX]                       ; 004aaca2
    LEA EDX,[EDX]                       ; 004aaca8
    MOV EAX,EAX                         ; 004aacae
    ADD ESP,0xc                         ; 004aacb0
        ;   Label: LAB_004aacb0
    POP EBP                             ; 004aacb3
    POP EDI                             ; 004aacb4
    POP ESI                             ; 004aacb5
    POP EBX                             ; 004aacb6
    RET                                 ; 004aacb7

