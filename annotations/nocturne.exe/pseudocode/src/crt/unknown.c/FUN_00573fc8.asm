; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00573fc8(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_00572e88 at 00572e88
;
; Referenced Globals:
;   void* PTR_ExitThread_005754b8 = 00175b98
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_00567208_005c1b00 = 00567208
;   undefined4 DAT_02de4e30
;
; Called Functions:
;   crt_exception.c_RemoveExceptionHandler_FUN_0056ef24
;   crt_sync.c_CriticalSectionStub_FUN_00567208
;   crt_unknown.c_FUN_0056e664
;   ExitThread
;
; *****************************************************************************

section .text

    CALL dword ptr [0x005c1b00]         ; 00573fc8 | PTR_crt_sync.c_CriticalSectionStub_FUN_00567208_005c1b00
        ;   Label: crt_unknown.c_FUN_00573fc8
    CALL crt_exception.c_RemoveExceptionHandler_FUN_0056ef24 ; 00573fce
        ;   XREF to: 0056ef24 (UNCONDITIONAL_CALL)  ; void crt_exception.c_RemoveExceptionHandler_FUN_0056ef24()
    CMP dword ptr [0x02de4e30],0x0      ; 00573fd3 | DAT_02de4e30
    JNZ 0x00573fe6                      ; 00573fda
        ;   XREF to: 00573fe6 (CONDITIONAL_JUMP)  ; LAB_00573fe6
    PUSH 0x1                            ; 00573fdc
    CALL crt_unknown.c_FUN_0056e664     ; 00573fde
        ;   XREF to: 0056e664 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056e664()
    ADD ESP,0x4                         ; 00573fe3
    PUSH 0x0                            ; 00573fe6
        ;   Label: LAB_00573fe6
    CALL dword ptr CS:[0x5754b8]        ; 00573fe8 | PTR_ExitThread_005754b8
    RET                                 ; 00573fef

