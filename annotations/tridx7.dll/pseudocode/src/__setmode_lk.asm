; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __setmode_lk(uint param_1,int param_2)
;
;
; XREF[2]:
;   FUN_1000e810 at 1000e84d
;   __chsize_lk at 1000b5c7
;
; Referenced Globals:
;   undefined4 DAT_10241870
;
; Called Functions:
;   FUN_10008a20
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 1000e880
        ;   Label: __setmode_lk
    PUSH EBX                            ; 1000e884
    MOV EAX,ECX                         ; 1000e885
    AND ECX,0x1f                        ; 1000e887
    SHL ECX,0x2                         ; 1000e88a
    AND EAX,0xffffffe7                  ; 1000e88d
    SAR EAX,0x3                         ; 1000e890
    MOV EDX,dword ptr [EAX + 0x10241870] ; 1000e893 | DAT_10241870
    LEA EAX,[ECX + ECX*0x8]             ; 1000e899
    LEA ECX,[EDX + EAX*0x1 + 0x4]       ; 1000e89c
    XOR EDX,EDX                         ; 1000e8a0
    MOV BL,byte ptr [ECX]               ; 1000e8a2
    MOV AL,BL                           ; 1000e8a4
    AND AL,0x80                         ; 1000e8a6
    MOV DL,AL                           ; 1000e8a8
    MOV EAX,dword ptr [ESP + 0xc]       ; 1000e8aa
    CMP EAX,0x8000                      ; 1000e8ae
    JNZ 0x1000e8ba                      ; 1000e8b3
        ;   XREF to: 1000e8ba (CONDITIONAL_JUMP)  ; LAB_1000e8ba
    AND BL,0x7f                         ; 1000e8b5
    JMP 0x1000e8c4                      ; 1000e8b8
        ;   XREF to: 1000e8c4 (UNCONDITIONAL_JUMP)  ; LAB_1000e8c4
    CMP EAX,0x4000                      ; 1000e8ba
        ;   Label: LAB_1000e8ba
    JNZ 0x1000e8d7                      ; 1000e8bf
        ;   XREF to: 1000e8d7 (CONDITIONAL_JUMP)  ; LAB_1000e8d7
    OR BL,0x80                          ; 1000e8c1
    MOV byte ptr [ECX],BL               ; 1000e8c4
        ;   Label: LAB_1000e8c4
    CMP EDX,0x1                         ; 1000e8c6
    SBB EAX,EAX                         ; 1000e8c9
    POP EBX                             ; 1000e8cb
    AND EAX,0x4000                      ; 1000e8cc
    ADD EAX,0x4000                      ; 1000e8d1
    RET                                 ; 1000e8d6
    CALL FUN_10008a20                   ; 1000e8d7
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a20()
        ;   Label: LAB_1000e8d7
    POP EBX                             ; 1000e8dc
    MOV dword ptr [EAX],0x16            ; 1000e8dd
    MOV EAX,0xffffffff                  ; 1000e8e3
    RET                                 ; 1000e8e8

