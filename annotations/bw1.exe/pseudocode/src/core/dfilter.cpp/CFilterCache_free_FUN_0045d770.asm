; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CFilterCache_free_FUN_0045d770(CFilterCache *this_ptr)
;
; Parameters:
; CFilterCache *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dfilter.cpp_CFilterCache_dtor_FUN_0045d750 at 0045d756
;   core_set.cpp_CDemonSet_initScene_FUN_0054ec60 at 0054ec96
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_dtor_FUN_0045d9a0
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d770
        ;   Label: core_dfilter.cpp_CFilterCache_free_FUN_0045d770
    PUSH ESI                            ; 0045d771
    PUSH EDI                            ; 0045d772
    MOV EDI,dword ptr [ESP + 0x10]      ; 0045d773
    MOV EDX,dword ptr [EDI]             ; 0045d777
    XOR EBX,EBX                         ; 0045d779
    TEST EDX,EDX                        ; 0045d77b
    JLE 0x0045d795                      ; 0045d77d
        ;   XREF to: 0045d795 (CONDITIONAL_JUMP)  ; LAB_0045d795
    MOV ESI,EDI                         ; 0045d77f
    MOV EAX,dword ptr [ESI + 0xa04]     ; 0045d781
        ;   Label: LAB_0045d781
    TEST EAX,EAX                        ; 0045d787
    JNZ 0x0045d79f                      ; 0045d789
        ;   XREF to: 0045d79f (CONDITIONAL_JUMP)  ; LAB_0045d79f
    INC EBX                             ; 0045d78b
        ;   Label: LAB_0045d78b
    MOV ECX,dword ptr [EDI]             ; 0045d78c
    ADD ESI,0x4                         ; 0045d78e
    CMP EBX,ECX                         ; 0045d791
    JL 0x0045d781                       ; 0045d793
        ;   XREF to: 0045d781 (CONDITIONAL_JUMP)  ; LAB_0045d781
    MOV dword ptr [EDI],0x0             ; 0045d795
        ;   Label: LAB_0045d795
    POP EDI                             ; 0045d79b
    POP ESI                             ; 0045d79c
    POP EBX                             ; 0045d79d
    RET                                 ; 0045d79e
    PUSH 0x0                            ; 0045d79f
        ;   Label: LAB_0045d79f
    PUSH EAX                            ; 0045d7a1
    CALL core_dfilter.cpp_CDemonFilter_dtor_FUN_0045d9a0 ; 0045d7a2
        ;   XREF to: 0045d9a0 (UNCONDITIONAL_CALL)  ; CDemonFilter * core_dfilter.cpp_CDemonFilter_dtor_FUN_0045d9a0(CDemonFilter * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0045d7a7
    PUSH EAX                            ; 0045d7aa
    CALL crt_unknown.c_FUN_005c0344     ; 0045d7ab
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 0045d7b0
    JMP 0x0045d78b                      ; 0045d7b3
        ;   XREF to: 0045d78b (UNCONDITIONAL_JUMP)  ; LAB_0045d78b

