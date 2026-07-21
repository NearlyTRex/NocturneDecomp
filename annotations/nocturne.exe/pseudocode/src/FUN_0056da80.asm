; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * FUN_0056da80(byte *param_1)
;
;
; XREF[10]:
;   FUN_0056c864 at 0056c916
;   FUN_0056dbb0 at 0056dbfd
;   FUN_0056dcd0 at 0056dd11
;   FUN_00570870 at 005708a4
;   FUN_00572a90 at 00572ad6
;   FUN_00572d90 at 00572de3
;   FUN_00574000 at 00574016
;   FUN_00574030 at 0057406e
;   crt_file.c_makepath_FUN_0056626c at 00566323
;   crt_string.c_splitpath_FUN_00566498 at 005664f1
;
; Referenced Globals:
;   undefined4 DAT_02de5c30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0056da80
        ;   Label: FUN_0056da80
    CMP dword ptr [0x02de5c30],0x0      ; 0056da84 | DAT_02de5c30
    JZ 0x0056daac                       ; 0056da8b
        ;   XREF to: 0056daac (CONDITIONAL_JUMP)  ; LAB_0056daac
    XOR EDX,EDX                         ; 0056da8d
    MOV DL,byte ptr [EAX]               ; 0056da8f
    MOV DL,byte ptr [EDX + 0x2de5c41]   ; 0056da91
    AND DL,0x1                          ; 0056da97
    AND EDX,0xff                        ; 0056da9a
    JZ 0x0056daac                       ; 0056daa0
        ;   XREF to: 0056daac (CONDITIONAL_JUMP)  ; LAB_0056daac
    CMP byte ptr [EAX + 0x1],0x0        ; 0056daa2
    JZ 0x0056daac                       ; 0056daa6
        ;   XREF to: 0056daac (CONDITIONAL_JUMP)  ; LAB_0056daac
    ADD EAX,0x2                         ; 0056daa8
    RET                                 ; 0056daab
    INC EAX                             ; 0056daac
        ;   Label: LAB_0056daac
    RET                                 ; 0056daad

