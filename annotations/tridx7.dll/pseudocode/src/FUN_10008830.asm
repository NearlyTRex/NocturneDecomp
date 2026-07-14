; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_10008830(undefined4 param_1)
;
;
; XREF[28]:
;   FUN_10006c40 at 10006cb1
;   FUN_10007920 at 1000792c
;   FUN_10007b60 at 10007b97
;   FUN_100081e0 at 10008276
;   FUN_100083e0 at 10008496
;   FUN_1000aee0 at 1000af32
;   FUN_1000b060 at 1000b077
;   FUN_1000b950 at 1000b9c0
;   FUN_1000be00 at 1000bf25
;   FUN_1000c0f0 at 1000c1ea
;   ... and 18 more
;
; Referenced Globals:
;   undefined4 DAT_10017780
;
; Called Functions:
;   FUN_10008850
;
; *****************************************************************************

section .text

    MOV EAX,[0x10017780]                ; 10008830 | DAT_10017780
        ;   Label: FUN_10008830
    MOV ECX,dword ptr [ESP + 0x4]       ; 10008835
    PUSH EAX                            ; 10008839
    PUSH ECX                            ; 1000883a
    CALL FUN_10008850                   ; 1000883b
        ;   XREF to: 10008850 (UNCONDITIONAL_CALL)  ; undefined FUN_10008850()
    ADD ESP,0x8                         ; 10008840
    RET                                 ; 10008843

