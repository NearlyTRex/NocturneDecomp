; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CDemonFilter_allocMemory_FUN_0045d9c0(CDemonFilter *this_ptr)
;
; Parameters:
; CDemonFilter *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dfilter.cpp_CDemonFilter_init_FUN_0045dc30 at 0045dd18
;   core_dfilter.cpp_CDemonFilter_load_FUN_0045da30 at 0045db22
;
; Referenced Globals:
;   TerminatedCString s_core_dfilter_cpp_005d8424
;   TerminatedCString s_CDemonFilter_allocMemory_005d8438
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_freeMemory_FUN_0045da10
;   core_main.c_FUN_005030e0
;   crt_unknown.c_FUN_005c08d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d9c0
        ;   Label: core_dfilter.cpp_CDemonFilter_allocMemory_FUN_0045d9c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045d9c1
    PUSH EBX                            ; 0045d9c5
    CALL core_dfilter.cpp_CDemonFilter_freeMemory_FUN_0045da10 ; 0045d9c6
        ;   XREF to: 0045da10 (UNCONDITIONAL_CALL)  ; void core_dfilter.cpp_CDemonFilter_freeMemory_FUN_0045da10(CDemonFilter * this_ptr)
    MOV EAX,dword ptr [EBX]             ; 0045d9cb
    IMUL EAX,dword ptr [EBX + 0x4]      ; 0045d9cd
    ADD ESP,0x4                         ; 0045d9d1
    PUSH EAX                            ; 0045d9d4
    CALL crt_unknown.c_FUN_005c08d0     ; 0045d9d5
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 0045d9da
    MOV dword ptr [EBX + 0x48],EAX      ; 0045d9dd
    TEST EAX,EAX                        ; 0045d9e0
    JZ 0x0045d9e6                       ; 0045d9e2
        ;   XREF to: 0045d9e6 (CONDITIONAL_JUMP)  ; LAB_0045d9e6
    POP EBX                             ; 0045d9e4
    RET                                 ; 0045d9e5
    PUSH ESI                            ; 0045d9e6
        ;   Label: LAB_0045d9e6
    MOV EBX,0x5d8424                    ; 0045d9e7 | = "..\\core\\dfilter.cpp"
    MOV ESI,0x8d                        ; 0045d9ec
    PUSH 0x5d8438                       ; 0045d9f1 | = "CDemonFilter::allocMemory - Out of me..."
    MOV dword ptr [0x01d1d400],EBX      ; 0045d9f6 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0045d9fc | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0045da02
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0045da07
    POP ESI                             ; 0045da0a
    POP EBX                             ; 0045da0b
    RET                                 ; 0045da0c

