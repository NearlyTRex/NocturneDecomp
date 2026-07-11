; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056e174(int param_1)
;
;
; XREF[1]:
;   FUN_005671f8 at 005671fd
;
; Referenced Globals:
;   void* PTR_FUN_005c1af0 = 005671e4
;   void* PTR_FUN_005c1af4 = 005671e4
;   undefined4 DAT_005c1f54
;   undefined4 DAT_005c1f58
;
; Called Functions:
;   FUN_005671e4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e174
        ;   Label: FUN_0056e174
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056e175
    CALL dword ptr [0x005c1af0]         ; 0056e179 | PTR_FUN_005c1af0
    TEST EBX,EBX                        ; 0056e17f
    JLE 0x0056e198                      ; 0056e181
        ;   XREF to: 0056e198 (CONDITIONAL_JUMP)  ; LAB_0056e198
    CMP EBX,dword ptr [0x005c1f58]      ; 0056e183 | DAT_005c1f58
    JGE 0x0056e198                      ; 0056e189
        ;   XREF to: 0056e198 (CONDITIONAL_JUMP)  ; LAB_0056e198
    MOV EDX,dword ptr [0x005c1f54]      ; 0056e18b | DAT_005c1f54
    MOV dword ptr [EDX + EBX*0x4],0x0   ; 0056e191
    CALL dword ptr [0x005c1af4]         ; 0056e198 | PTR_FUN_005c1af4
        ;   Label: LAB_0056e198
    POP EBX                             ; 0056e19e
    RET                                 ; 0056e19f

