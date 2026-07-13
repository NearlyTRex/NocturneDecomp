; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl __setargv(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_100056a0 at 10005778
;
; Referenced Globals:
;   undefined4 DAT_10016d74
;   undefined4 DAT_10016d78
;   undefined4 DAT_10016d90
;   undefined4 DAT_10240690
;   undefined4 DAT_10241980
;   void* PTR_GetModuleFileNameA_1024220c = 00242528
;
; Called Functions:
;   __amsg_exit
;   FUN_10007ce0
;   FUN_10008830
;   GetModuleFileNameA
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 10007c40
        ;   Label: __setargv
    PUSH ESI                            ; 10007c43
    PUSH EDI                            ; 10007c44
    PUSH 0x104                          ; 10007c45
    MOV ESI,0x10240690                  ; 10007c4a | DAT_10240690
    PUSH ESI                            ; 10007c4f | DAT_10240690
    PUSH 0x0                            ; 10007c50
    CALL dword ptr [0x1024220c]         ; 10007c52 | PTR_GetModuleFileNameA_1024220c
    MOV EAX,[0x10241980]                ; 10007c58 | DAT_10241980
    MOV dword ptr [0x10016d90],ESI      ; 10007c5d | DAT_10016d90
    CMP byte ptr [EAX],0x0              ; 10007c63
    JZ 0x10007c6e                       ; 10007c66
        ;   XREF to: 10007c6e (CONDITIONAL_JUMP)  ; LAB_10007c6e
    MOV ESI,dword ptr [0x10241980]      ; 10007c68 | DAT_10241980
    LEA EAX,[ESP + 0xc]                 ; 10007c6e
        ;   Label: LAB_10007c6e
    LEA ECX,[ESP + 0x8]                 ; 10007c72
    PUSH EAX                            ; 10007c76
    PUSH ECX                            ; 10007c77
    PUSH 0x0                            ; 10007c78
    PUSH 0x0                            ; 10007c7a
    PUSH ESI                            ; 10007c7c | DAT_10240690
    CALL FUN_10007ce0                   ; 10007c7d
        ;   XREF to: 10007ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_10007ce0()
    MOV EAX,dword ptr [ESP + 0x1c]      ; 10007c82
    ADD ESP,0x14                        ; 10007c86
    SHL EAX,0x2                         ; 10007c89
    ADD EAX,dword ptr [ESP + 0xc]       ; 10007c8c
    PUSH EAX                            ; 10007c90
    CALL FUN_10008830                   ; 10007c91
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; undefined FUN_10008830()
    ADD ESP,0x4                         ; 10007c96
    MOV EDI,EAX                         ; 10007c99
    TEST EDI,EDI                        ; 10007c9b
    JNZ 0x10007ca9                      ; 10007c9d
        ;   XREF to: 10007ca9 (CONDITIONAL_JUMP)  ; LAB_10007ca9
    PUSH 0x8                            ; 10007c9f
    CALL __amsg_exit                    ; 10007ca1
        ;   XREF to: 100058c0 (UNCONDITIONAL_CALL)  ; void __amsg_exit(int param_1)
    ADD ESP,0x4                         ; 10007ca6
    LEA EAX,[ESP + 0xc]                 ; 10007ca9
        ;   Label: LAB_10007ca9
    LEA ECX,[ESP + 0x8]                 ; 10007cad
    MOV EDX,dword ptr [ESP + 0x8]       ; 10007cb1
    PUSH EAX                            ; 10007cb5
    PUSH ECX                            ; 10007cb6
    LEA EAX,[EDI + EDX*0x4]             ; 10007cb7
    PUSH EAX                            ; 10007cba
    PUSH EDI                            ; 10007cbb
    PUSH ESI                            ; 10007cbc
    CALL FUN_10007ce0                   ; 10007cbd
        ;   XREF to: 10007ce0 (UNCONDITIONAL_CALL)  ; undefined FUN_10007ce0()
    MOV EAX,dword ptr [ESP + 0x1c]      ; 10007cc2
    ADD ESP,0x14                        ; 10007cc6
    DEC EAX                             ; 10007cc9
    MOV dword ptr [0x10016d78],EDI      ; 10007cca | DAT_10016d78
    POP EDI                             ; 10007cd0
    MOV [0x10016d74],EAX                ; 10007cd1 | DAT_10016d74
    POP ESI                             ; 10007cd6
    ADD ESP,0x8                         ; 10007cd7
    RET                                 ; 10007cda

