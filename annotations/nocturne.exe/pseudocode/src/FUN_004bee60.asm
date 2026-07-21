; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004bee60(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004b4800 at 004b482e
;
; Called Functions:
;   core_inv.cpp_CInventory_clear_FUN_004bee80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bee60
        ;   Label: FUN_004bee60
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bee61
    PUSH EBX                            ; 004bee65
    CALL core_inv.cpp_CInventory_clear_FUN_004bee80 ; 004bee66
        ;   XREF to: 004bee80 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_CInventory_clear_FUN_004bee80()
    ADD ESP,0x4                         ; 004bee6b
    MOV EAX,EBX                         ; 004bee6e
    POP EBX                             ; 004bee70
    RET                                 ; 004bee71

