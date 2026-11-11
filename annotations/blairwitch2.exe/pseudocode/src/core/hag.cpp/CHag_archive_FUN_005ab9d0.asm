; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hag_cpp_CHag_archive_FUN_005ab9d0(CHag *this_ptr)
;
; Parameters:
; CHag *           Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ab9d0
        ;   Label: core_hag.cpp_CHag_archive_FUN_005ab9d0
    PUSH EDX                            ; 005ab9d4
    CALL core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10 ; 005ab9d5
        ;   XREF to: 0059fc10 (UNCONDITIONAL_CALL)  ; void core_basicene.cpp_CBasicEnemy_archive_FUN_0059fc10(CBasicEnemy * this_ptr)
    ADD ESP,0x4                         ; 005ab9da
    RET                                 ; 005ab9dd

