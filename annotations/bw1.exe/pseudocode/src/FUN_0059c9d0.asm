; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059c9d0(undefined4 *param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x18]:1  local_18
;
; Called Functions:
;   FUN_0059c7d0
;   Ordinal_111
;   Ordinal_4
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0059c9d0
        ;   Label: FUN_0059c9d0
    PUSH EDI                            ; 0059c9d1
    SUB ESP,0x20                        ; 0059c9d2
    MOV EDX,dword ptr [ESP + 0x30]      ; 0059c9d5
    PUSH EDX                            ; 0059c9d9
    LEA ESI,[ESP + 0x14]                ; 0059c9da
    CALL FUN_0059c7d0                   ; 0059c9de
        ;   XREF to: 0059c7d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059c7d0()
    ADD ESP,0x4                         ; 0059c9e3
    MOV EDI,ESP                         ; 0059c9e6
    PUSH 0x10                           ; 0059c9e8
    LEA EAX,[ESP + 0x4]                 ; 0059c9ea
    LEA ESI,[ESP + 0x14]                ; 0059c9ee
    PUSH EAX                            ; 0059c9f2
    MOV EAX,dword ptr [ESP + 0x34]      ; 0059c9f3
    MOVSD ES:EDI,ESI                    ; 0059c9f7
    MOVSD ES:EDI,ESI                    ; 0059c9f8
    MOVSD ES:EDI,ESI                    ; 0059c9f9
    MOVSD ES:EDI,ESI                    ; 0059c9fa
    MOV ECX,dword ptr [EAX]             ; 0059c9fb
    PUSH ECX                            ; 0059c9fd
    CALL Ordinal_4                      ; 0059c9fe
        ;   XREF to: 005cf82c (UNCONDITIONAL_CALL)  ; undefined Ordinal_4()
    TEST EAX,EAX                        ; 0059ca03
    JNZ 0x0059ca12                      ; 0059ca05
        ;   XREF to: 0059ca12 (CONDITIONAL_JUMP)  ; LAB_0059ca12
    MOV EAX,0x1                         ; 0059ca07
        ;   Label: LAB_0059ca07
    ADD ESP,0x20                        ; 0059ca0c
    POP EDI                             ; 0059ca0f
    POP ESI                             ; 0059ca10
    RET                                 ; 0059ca11
    CALL Ordinal_111                    ; 0059ca12
        ;   XREF to: 005cf856 (UNCONDITIONAL_CALL)  ; undefined Ordinal_111()
        ;   Label: LAB_0059ca12
    CMP EAX,0x2733                      ; 0059ca17
    JZ 0x0059ca07                       ; 0059ca1c
        ;   XREF to: 0059ca07 (CONDITIONAL_JUMP)  ; LAB_0059ca07
    XOR EAX,EAX                         ; 0059ca1e
    ADD ESP,0x20                        ; 0059ca20
    POP EDI                             ; 0059ca23
    POP ESI                             ; 0059ca24
    RET                                 ; 0059ca25

