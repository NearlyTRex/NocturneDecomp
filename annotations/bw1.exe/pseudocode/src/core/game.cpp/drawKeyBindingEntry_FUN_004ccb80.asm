; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_drawKeyBindingEntry_FUN_004ccb80(EInputCodeType key_code,char *action_name)
;
; Parameters:
; EInputCodeType   Stack[0x4]:4   key_code
; char *           Stack[0x8]:4   action_name
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0152d244
;   undefined4 DAT_01cd0c4c
;   undefined4 DAT_01cd0c50
;   undefined4 DAT_01cd0c54
;
; Called Functions:
;   core_menu.cpp_getKeyDisplayName_FUN_0050d220
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_font.cpp_FUN_004c1dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ccb80
        ;   Label: core_game.cpp_drawKeyBindingEntry_FUN_004ccb80
    PUSH ESI                            ; 004ccb81
    PUSH EDI                            ; 004ccb82
    PUSH EBP                            ; 004ccb83
    SUB ESP,0x100                       ; 004ccb84
    MOV EDX,dword ptr [ESP + 0x118]     ; 004ccb8a
    PUSH EDX                            ; 004ccb91
    MOV ECX,dword ptr [ESP + 0x118]     ; 004ccb92
    PUSH ECX                            ; 004ccb99
    CALL core_menu.cpp_getKeyDisplayName_FUN_0050d220 ; 004ccb9a
        ;   XREF to: 0050d220 (UNCONDITIONAL_CALL)  ; char * core_menu.cpp_getKeyDisplayName_FUN_0050d220(EInputCodeType key_code)
    ADD ESP,0x4                         ; 004ccb9f
    PUSH EAX                            ; 004ccba2
    PUSH 0x5e13c4                       ; 004ccba3
    LEA EAX,[ESP + 0xc]                 ; 004ccba8
    PUSH EAX                            ; 004ccbac
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004ccbad
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 004ccbb2
    PUSH -0x1                           ; 004ccbb5
    PUSH 0x7                            ; 004ccbb7
    MOV EBX,dword ptr [0x01cd0c50]      ; 004ccbb9 | DAT_01cd0c50
    PUSH EBX                            ; 004ccbbf
    MOV ESI,dword ptr [0x01cd0c4c]      ; 004ccbc0 | DAT_01cd0c4c
    PUSH ESI                            ; 004ccbc6
    LEA EAX,[ESP + 0x10]                ; 004ccbc7
    PUSH EAX                            ; 004ccbcb
    MOV EDI,dword ptr [0x0152d244]      ; 004ccbcc | DAT_0152d244
    PUSH EDI                            ; 004ccbd2
    CALL engine_font.cpp_FUN_004c1dd0   ; 004ccbd3
        ;   XREF to: 004c1dd0 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004c1dd0()
    MOV EAX,[0x01cd0c54]                ; 004ccbd8 | DAT_01cd0c54
    MOV EBP,dword ptr [0x01cd0c50]      ; 004ccbdd | DAT_01cd0c50
    MOV EDX,dword ptr [0x0061b49c]      ; 004ccbe3 | DAT_0061b49c
    ADD EBP,EAX                         ; 004ccbe9
    SHL EAX,0x2                         ; 004ccbeb
    ADD ESP,0x18                        ; 004ccbee
    SUB EDX,EAX                         ; 004ccbf1
    MOV dword ptr [0x01cd0c50],EBP      ; 004ccbf3 | DAT_01cd0c50
    CMP EDX,EBP                         ; 004ccbf9
    JL 0x004ccc08                       ; 004ccbfb
        ;   XREF to: 004ccc08 (CONDITIONAL_JUMP)  ; LAB_004ccc08
    ADD ESP,0x100                       ; 004ccbfd
    POP EBP                             ; 004ccc03
    POP EDI                             ; 004ccc04
    POP ESI                             ; 004ccc05
    POP EBX                             ; 004ccc06
    RET                                 ; 004ccc07
    MOV EDX,dword ptr [0x01cd0c54]      ; 004ccc08 | DAT_01cd0c54
        ;   Label: LAB_004ccc08
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ccc0e
    SUB EAX,EDX                         ; 004ccc15
    ADD EAX,EAX                         ; 004ccc17
    MOV [0x01cd0c50],EAX                ; 004ccc19 | DAT_01cd0c50
    MOV EAX,[0x0061b498]                ; 004ccc1e | DAT_0061b498
    MOV EDX,EAX                         ; 004ccc23
    MOV ECX,0x3                         ; 004ccc25
    SAR EDX,0x1f                        ; 004ccc2a
    IDIV ECX                            ; 004ccc2d
    ADD dword ptr [0x01cd0c4c],EAX      ; 004ccc2f | DAT_01cd0c4c
    ADD ESP,0x100                       ; 004ccc35
    POP EBP                             ; 004ccc3b
    POP EDI                             ; 004ccc3c
    POP ESI                             ; 004ccc3d
    POP EBX                             ; 004ccc3e
    RET                                 ; 004ccc3f

