; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_00459910(CDemonFilter *this_ptr)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dfilter.cpp_CDemonFilter_init_FUN_00459b80 at 00459c68
;   core_dfilter.cpp_CDemonFilter_load_FUN_00459980 at 00459a72
;
; Referenced Globals:
;   TerminatedCString s_core_dfilter_cpp_005baa7d
;   TerminatedCString s_CDemonFilter_allocMemory_005baa91
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_freeMemory_FUN_00459960
;   core_main.c_FUN_004e4330
;   crt_unknown.c_FUN_005a3650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459910
        ;   Label: core_dfilter.cpp_CDemonFilter_allocMemory_FUN_00459910
    MOV EBX,dword ptr [ESP + 0x8]       ; 00459911
    PUSH EBX                            ; 00459915
    CALL core_dfilter.cpp_CDemonFilter_freeMemory_FUN_00459960 ; 00459916
        ;   XREF to: 00459960 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_freeMemory_FUN_00459960(CDemonFilter * this_ptr)
    MOV EAX,dword ptr [EBX]             ; 0045991b
    IMUL EAX,dword ptr [EBX + 0x4]      ; 0045991d
    ADD ESP,0x4                         ; 00459921
    PUSH EAX                            ; 00459924
    CALL crt_unknown.c_FUN_005a3650     ; 00459925
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005a3650(ulong size)
    ADD ESP,0x4                         ; 0045992a
    MOV dword ptr [EBX + 0x48],EAX      ; 0045992d
    TEST EAX,EAX                        ; 00459930
    JZ 0x00459936                       ; 00459932
        ;   XREF to: 00459936 (CONDITIONAL_JUMP)  ; LAB_00459936
    POP EBX                             ; 00459934
    RET                                 ; 00459935
    PUSH ESI                            ; 00459936
        ;   Label: LAB_00459936
    MOV EBX,0x5baa7d                    ; 00459937 | = "..\\core\\dfilter.cpp"
    MOV ESI,0x8d                        ; 0045993c
    PUSH 0x5baa91                       ; 00459941 | = "CDemonFilter::allocMemory - Out of me..."
    MOV dword ptr [0x01d71de0],EBX      ; 00459946 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 0045994c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00459952
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00459957
    POP ESI                             ; 0045995a
    POP EBX                             ; 0045995b
    RET                                 ; 0045995c

