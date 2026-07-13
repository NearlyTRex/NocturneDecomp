; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00571564(int param_1)
;
;
; XREF[5]:
;   FUN_005715d0 at 005715e2
;   FUN_00571630 at 00571633
;   FUN_005716d8 at 005716db
;   FUN_00571718 at 00571776
;   FUN_005717d8 at 005717df
;
; Referenced Globals:
;   void* PTR_FUN_005c1abc = 005671dc
;   undefined4 DAT_005c20d8
;
; Called Functions:
;   FUN_005671dc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571564
        ;   Label: FUN_00571564
    MOV EBX,dword ptr [ESP + 0x8]       ; 00571565
    CMP EBX,0x7                         ; 00571569
    JZ 0x00571573                       ; 0057156c
        ;   XREF to: 00571573 (CONDITIONAL_JUMP)  ; LAB_00571573
    CMP EBX,0x4                         ; 0057156e
    JNZ 0x0057157c                      ; 00571571
        ;   XREF to: 0057157c (CONDITIONAL_JUMP)  ; LAB_0057157c
    MOV EAX,dword ptr [EBX*0x8 + 0x5c20d8] ; 00571573 | DAT_005c20d8
        ;   Label: LAB_00571573
    POP EBX                             ; 0057157a
    RET                                 ; 0057157b
    CALL dword ptr [0x005c1abc]         ; 0057157c | PTR_FUN_005c1abc
        ;   Label: LAB_0057157c
    MOV EAX,dword ptr [EAX + EBX*0x8 + 0x58] ; 00571582
    POP EBX                             ; 00571586
    RET                                 ; 00571587

