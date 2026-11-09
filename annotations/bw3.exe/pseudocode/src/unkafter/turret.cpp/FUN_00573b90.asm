; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint unkafter_turret_cpp_FUN_00573b90(int param_1,int param_2)
;
;
; XREF[3]:
;   unkafter_turret.cpp_FUN_00573aa0 at 00573aac
;   unkafter_turret.cpp_FUN_00573af0 at 00573b35
;   unkafter_turret.cpp_FUN_00573b60 at 00573b6a
;
; Called Functions:
;   support_trstream.cpp_FUN_00573eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573b90
        ;   Label: unkafter_turret.cpp_FUN_00573b90
    PUSH ESI                            ; 00573b91
    PUSH EDI                            ; 00573b92
    PUSH EBP                            ; 00573b93
    MOV EBX,dword ptr [ESP + 0x14]      ; 00573b94
    MOV ESI,dword ptr [ESP + 0x18]      ; 00573b98
    CMP dword ptr [EBX + 0x4],0x0       ; 00573b9c
    JZ 0x00573bcb                       ; 00573ba0
        ;   XREF to: 00573bcb (CONDITIONAL_JUMP)  ; LAB_00573bcb
    CMP ESI,dword ptr [EBX + 0x8]       ; 00573ba2
    JGE 0x00573bd5                      ; 00573ba5
        ;   XREF to: 00573bd5 (CONDITIONAL_JUMP)  ; LAB_00573bd5
    MOV EDI,dword ptr [EBX + 0x1c]      ; 00573ba7
    CMP ESI,EDI                         ; 00573baa
    JL 0x00573bdf                       ; 00573bac
        ;   XREF to: 00573bdf (CONDITIONAL_JUMP)  ; LAB_00573bdf
    MOV EBP,dword ptr [EBX + 0x24]      ; 00573bae
    LEA EAX,[EDI + EBP*0x1]             ; 00573bb1
    CMP EAX,ESI                         ; 00573bb4
    JLE 0x00573bdf                      ; 00573bb6
        ;   XREF to: 00573bdf (CONDITIONAL_JUMP)  ; LAB_00573bdf
    SUB ESI,dword ptr [EBX + 0x1c]      ; 00573bb8
        ;   Label: LAB_00573bb8
    MOV EAX,dword ptr [EBX + 0x18]      ; 00573bbb
    MOV AL,byte ptr [ESI + EAX*0x1]     ; 00573bbe
    AND EAX,0xff                        ; 00573bc1
    POP EBP                             ; 00573bc6
    POP EDI                             ; 00573bc7
    POP ESI                             ; 00573bc8
    POP EBX                             ; 00573bc9
    RET                                 ; 00573bca
    MOV EAX,0xfffffffe                  ; 00573bcb
        ;   Label: LAB_00573bcb
    POP EBP                             ; 00573bd0
    POP EDI                             ; 00573bd1
    POP ESI                             ; 00573bd2
    POP EBX                             ; 00573bd3
    RET                                 ; 00573bd4
    MOV EAX,0xffffffff                  ; 00573bd5
        ;   Label: LAB_00573bd5
    POP EBP                             ; 00573bda
    POP EDI                             ; 00573bdb
    POP ESI                             ; 00573bdc
    POP EBX                             ; 00573bdd
    RET                                 ; 00573bde
    PUSH ESI                            ; 00573bdf
        ;   Label: LAB_00573bdf
    PUSH EBX                            ; 00573be0
    CALL support_trstream.cpp_FUN_00573eb0 ; 00573be1
        ;   XREF to: 00573eb0 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_00573eb0()
    ADD ESP,0x8                         ; 00573be6
    TEST EAX,EAX                        ; 00573be9
    JNZ 0x00573bb8                      ; 00573beb
        ;   XREF to: 00573bb8 (CONDITIONAL_JUMP)  ; LAB_00573bb8
    MOV EAX,0xffffffff                  ; 00573bed
    POP EBP                             ; 00573bf2
    POP EDI                             ; 00573bf3
    POP ESI                             ; 00573bf4
    POP EBX                             ; 00573bf5
    RET                                 ; 00573bf6

