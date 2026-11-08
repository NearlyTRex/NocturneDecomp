; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059f740(int param_1,undefined4 param_2,int param_3,undefined4 param_4)
;
; Local Variables:
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
; undefined        Stack[-0x10]:1  local_10
;
; XREF[8]:
;   FUN_005a1350 at 005a139a
;   FUN_005a2520 at 005a2551
;   FUN_005a3420 at 005a3450
;   FUN_005a4600 at 005a4631
;   FUN_005a5300 at 005a534a
;   FUN_005aa380 at 005aa3b2
;   FUN_005ab940 at 005ab971
;   FUN_005ac610 at 005ac648
;
; Referenced Globals:
;   undefined4 DAT_0265370c
;
; Called Functions:
;   FUN_00408d70
;   FUN_004222d0
;   FUN_00488110
;   FUN_00591530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059f740
        ;   Label: FUN_0059f740
    SUB ESP,0x6c                        ; 0059f741
    MOV EBX,dword ptr [ESP + 0x74]      ; 0059f744
    CMP dword ptr [EBX + 0x113d0],0x0   ; 0059f748
    JZ 0x0059f758                       ; 0059f74f
        ;   XREF to: 0059f758 (CONDITIONAL_JUMP)  ; LAB_0059f758
    XOR EAX,EAX                         ; 0059f751
    ADD ESP,0x6c                        ; 0059f753
    POP EBX                             ; 0059f756
    RET                                 ; 0059f757
    PUSH EDI                            ; 0059f758
        ;   Label: LAB_0059f758
    PUSH ESI                            ; 0059f759
    LEA EAX,[ESP + 0x8]                 ; 0059f75a
    PUSH EAX                            ; 0059f75e
    CALL FUN_004222d0                   ; 0059f75f
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004222d0()
    ADD ESP,0x4                         ; 0059f764
    MOV EAX,dword ptr [ESP + 0x80]      ; 0059f767
    MOV EDX,dword ptr [ESP + 0x84]      ; 0059f76e
    MOV dword ptr [ESP + 0xc],EAX       ; 0059f775
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059f779
    SUB EAX,EDX                         ; 0059f780
    MOV dword ptr [ESP + 0x3c],EBX      ; 0059f782
    MOV EDX,EAX                         ; 0059f786
    MOV dword ptr [ESP + 0x40],EBX      ; 0059f788
    SHL EDX,0x4                         ; 0059f78c
    LEA EAX,[EBX + 0x1134]              ; 0059f78f
    ADD EAX,EDX                         ; 0059f795
    PUSH EAX                            ; 0059f797
    PUSH 0x265370c                      ; 0059f798 | DAT_0265370c
    LEA ESI,[ESP + 0x64]                ; 0059f79d
    LEA EDI,[ESP + 0x70]                ; 0059f7a1
    CALL FUN_00591530                   ; 0059f7a5
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    ADD ESP,0x8                         ; 0059f7aa
    LEA EAX,[ESP + 0x68]                ; 0059f7ad
    LEA ESI,[ESP + 0x5c]                ; 0059f7b1
    PUSH EAX                            ; 0059f7b5
    MOVSD ES:EDI,ESI                    ; 0059f7b6
    MOVSD ES:EDI,ESI                    ; 0059f7b7
    MOVSD ES:EDI,ESI                    ; 0059f7b8
    PUSH EBX                            ; 0059f7b9
    LEA ESI,[ESP + 0x58]                ; 0059f7ba
    CALL FUN_00408d70                   ; 0059f7be
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 0059f7c3
    LEA EAX,[ESP + 0x8]                 ; 0059f7c6
    PUSH EAX                            ; 0059f7ca
    LEA EAX,[ESP + 0x48]                ; 0059f7cb
    PUSH dword ptr [ESP + 0x8c]         ; 0059f7cf
    PUSH EAX                            ; 0059f7d6
    LEA EDI,[ESP + 0x50]                ; 0059f7d7
    LEA ESI,[ESP + 0x5c]                ; 0059f7db
    PUSH EBX                            ; 0059f7df
    MOVSD ES:EDI,ESI                    ; 0059f7e0
    MOVSD ES:EDI,ESI                    ; 0059f7e1
    MOVSD ES:EDI,ESI                    ; 0059f7e2
    CALL FUN_00488110                   ; 0059f7e3
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; undefined FUN_00488110()
    ADD ESP,0x10                        ; 0059f7e8
    POP ESI                             ; 0059f7eb
    POP EDI                             ; 0059f7ec
    ADD ESP,0x6c                        ; 0059f7ed
    POP EBX                             ; 0059f7f0
    RET                                 ; 0059f7f1

