; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trisock_cpp_FUN_00549170(void)
;
; Local Variables:
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x8]:4  local_8
;
; Called Functions:
;   Ordinal_1
;   support_trisock.cpp_convertSockAddr_FUN_00548d50
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00549170
        ;   Label: support_trisock.cpp_FUN_00549170
    SUB ESP,0x1c                        ; 00549171
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00549174
    LEA EAX,[ESP + 0x18]                ; 00549178
    PUSH EAX                            ; 0054917c
    LEA EAX,[ESP + 0x4]                 ; 0054917d
    MOV EDX,0x10                        ; 00549181
    PUSH EAX                            ; 00549186
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00549187
    MOV dword ptr [ESP + 0x20],EDX      ; 0054918b
    MOV ECX,dword ptr [EAX]             ; 0054918f
    PUSH ECX                            ; 00549191
    CALL Ordinal_1                      ; 00549192
        ;   XREF to: 00574bc6 (UNCONDITIONAL_CALL)  ; undefined Ordinal_1()
    MOV EDX,dword ptr [ESP + 0x28]      ; 00549197
    MOV dword ptr [EDX],EAX             ; 0054919b
    CMP EAX,-0x1                        ; 0054919d
    JZ 0x005491b0                       ; 005491a0
        ;   XREF to: 005491b0 (CONDITIONAL_JUMP)  ; LAB_005491b0
    TEST EDI,EDI                        ; 005491a2
    JNZ 0x005491b7                      ; 005491a4
        ;   XREF to: 005491b7 (CONDITIONAL_JUMP)  ; LAB_005491b7
    MOV EAX,0x1                         ; 005491a6
    ADD ESP,0x1c                        ; 005491ab
    POP EDI                             ; 005491ae
    RET                                 ; 005491af
    XOR EAX,EAX                         ; 005491b0
        ;   Label: LAB_005491b0
    ADD ESP,0x1c                        ; 005491b2
    POP EDI                             ; 005491b5
    RET                                 ; 005491b6
    PUSH ESI                            ; 005491b7
        ;   Label: LAB_005491b7
    LEA EAX,[ESP + 0x4]                 ; 005491b8
    PUSH EAX                            ; 005491bc
    LEA EAX,[ESP + 0x18]                ; 005491bd
    PUSH EAX                            ; 005491c1
    CALL support_trisock.cpp_convertSockAddr_FUN_00548d50 ; 005491c2
        ;   XREF to: 00548d50 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_convertSockAddr_FUN_00548d50()
    MOV ESI,EAX                         ; 005491c7
    ADD ESP,0x8                         ; 005491c9
    MOVSD ES:EDI,ESI                    ; 005491cc
    MOVSD ES:EDI,ESI                    ; 005491cd
    POP ESI                             ; 005491ce
    MOV EAX,0x1                         ; 005491cf
    ADD ESP,0x1c                        ; 005491d4
    POP EDI                             ; 005491d7
    RET                                 ; 005491d8

