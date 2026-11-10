; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool core_inv_cpp_FUN_004dd310(undefined4 param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   core_inv.cpp_CInventory_renderAllItems_FUN_004dda90 at 004ddbbd
;   core_inv.cpp_CInventory_selectWeapon_FUN_004dbb40 at 004dbbdc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 004dd310
        ;   Label: core_inv.cpp_FUN_004dd310
    CMP EAX,0x5                         ; 004dd314
    JNZ 0x004dd31f                      ; 004dd317
        ;   XREF to: 004dd31f (CONDITIONAL_JUMP)  ; LAB_004dd31f
    MOV EAX,0x1                         ; 004dd319
    RET                                 ; 004dd31e
    MOV EDX,dword ptr [ESP + 0x8]       ; 004dd31f
        ;   Label: LAB_004dd31f
    CMP EAX,dword ptr [EDX + 0x574]     ; 004dd323
    SETZ AL                             ; 004dd329
    AND EAX,0xff                        ; 004dd32c
    RET                                 ; 004dd331

