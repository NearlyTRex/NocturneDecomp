; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_setutil_cpp_FUN_00514410(undefined4 param_1)
;
;
; Called Functions:
;   core_setutil.cpp_FUN_00514430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514410
        ;   Label: core_setutil.cpp_FUN_00514410
    MOV EBX,dword ptr [ESP + 0x8]       ; 00514411
    PUSH EBX                            ; 00514415
    CALL core_setutil.cpp_FUN_00514430  ; 00514416
        ;   XREF to: 00514430 (UNCONDITIONAL_CALL)  ; undefined core_setutil.cpp_FUN_00514430()
    ADD ESP,0x4                         ; 0051441b
    MOV EAX,EBX                         ; 0051441e
    POP EBX                             ; 00514420
    RET                                 ; 00514421

