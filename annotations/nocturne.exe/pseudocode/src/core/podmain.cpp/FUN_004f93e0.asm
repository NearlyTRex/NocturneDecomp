; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPod * core_podmain_cpp_FUN_004f93e0(CPod *param_1,byte param_2)
;
;
; Referenced Globals:
;   WatcomTypeInfo g_CDemonPodTypeInfo_005a1510
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_0056445f
;   crt_unknown.c_FUN_00564494
;   engine_pod.cpp_CPod_dtor_FUN_004f8840
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f93e0
        ;   Label: core_podmain.cpp_FUN_004f93e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f93e1
    TEST byte ptr [ESP + 0xc],0x4       ; 004f93e5
    JNZ 0x004f9406                      ; 004f93ea
        ;   XREF to: 004f9406 (CONDITIONAL_JUMP)  ; LAB_004f9406
    PUSH 0x1                            ; 004f93ec
    PUSH EBX                            ; 004f93ee
    CALL engine_pod.cpp_CPod_dtor_FUN_004f8840 ; 004f93ef
        ;   XREF to: 004f8840 (UNCONDITIONAL_CALL)  ; CPod * engine_pod.cpp_CPod_dtor_FUN_004f8840(CPod * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004f93f4
    MOV DL,byte ptr [ESP + 0xc]         ; 004f93f7
    MOV EBX,EAX                         ; 004f93fb
    TEST DL,0x2                         ; 004f93fd
    JNZ 0x004f9421                      ; 004f9400
        ;   XREF to: 004f9421 (CONDITIONAL_JUMP)  ; LAB_004f9421
    MOV EAX,EBX                         ; 004f9402
    POP EBX                             ; 004f9404
    RET                                 ; 004f9405
    PUSH 0x5a1510                       ; 004f9406 | g_CDemonPodTypeInfo_005a1510
        ;   Label: LAB_004f9406
    PUSH EBX                            ; 004f940b
    CALL crt_memory.c___vec_delete_FUN_0056445f ; 004f940c
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_0056445f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004f9411
    PUSH EAX                            ; 004f9414
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004f9415
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_free_FUN_00564486(void * ptr)
    ADD ESP,0x4                         ; 004f941a
    MOV EAX,EBX                         ; 004f941d
    POP EBX                             ; 004f941f
    RET                                 ; 004f9420
    PUSH EAX                            ; 004f9421
        ;   Label: LAB_004f9421
    CALL crt_unknown.c_FUN_00564494     ; 004f9422
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 004f9427
    MOV EAX,EBX                         ; 004f942a
    POP EBX                             ; 004f942c
    RET                                 ; 004f942d

