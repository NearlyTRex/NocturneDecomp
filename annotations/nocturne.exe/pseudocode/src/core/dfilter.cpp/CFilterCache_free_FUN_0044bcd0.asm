; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfilter_cpp_CFilterCache_free_FUN_0044bcd0(CFilterCache *this_ptr)
;
; Parameters:
; CFilterCache *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dfilter.cpp_FUN_0044bcb0 at 0044bcb6
;   core_set.cpp_CDemonSet_initScene_FUN_005084c0 at 005084f6
;
; Called Functions:
;   core_dfilter.cpp_CDemonFilter_dtor_FUN_0044bf00
;   crt_unknown.c_FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044bcd0
        ;   Label: core_dfilter.cpp_CFilterCache_free_FUN_0044bcd0
    PUSH ESI                            ; 0044bcd1
    PUSH EDI                            ; 0044bcd2
    MOV EDI,dword ptr [ESP + 0x10]      ; 0044bcd3
    MOV EDX,dword ptr [EDI]             ; 0044bcd7
    XOR EBX,EBX                         ; 0044bcd9
    TEST EDX,EDX                        ; 0044bcdb
    JLE 0x0044bcf5                      ; 0044bcdd
        ;   XREF to: 0044bcf5 (CONDITIONAL_JUMP)  ; LAB_0044bcf5
    MOV ESI,EDI                         ; 0044bcdf
    MOV EAX,dword ptr [ESI + 0xa04]     ; 0044bce1
        ;   Label: LAB_0044bce1
    TEST EAX,EAX                        ; 0044bce7
    JNZ 0x0044bcff                      ; 0044bce9
        ;   XREF to: 0044bcff (CONDITIONAL_JUMP)  ; LAB_0044bcff
    INC EBX                             ; 0044bceb
        ;   Label: LAB_0044bceb
    MOV ECX,dword ptr [EDI]             ; 0044bcec
    ADD ESI,0x4                         ; 0044bcee
    CMP EBX,ECX                         ; 0044bcf1
    JL 0x0044bce1                       ; 0044bcf3
        ;   XREF to: 0044bce1 (CONDITIONAL_JUMP)  ; LAB_0044bce1
    MOV dword ptr [EDI],0x0             ; 0044bcf5
        ;   Label: LAB_0044bcf5
    POP EDI                             ; 0044bcfb
    POP ESI                             ; 0044bcfc
    POP EBX                             ; 0044bcfd
    RET                                 ; 0044bcfe
    PUSH 0x0                            ; 0044bcff
        ;   Label: LAB_0044bcff
    PUSH EAX                            ; 0044bd01
    CALL core_dfilter.cpp_CDemonFilter_dtor_FUN_0044bf00 ; 0044bd02
        ;   XREF to: 0044bf00 (UNCONDITIONAL_CALL)  ; CDemonFilter * core_dfilter.cpp_CDemonFilter_dtor_FUN_0044bf00(CDemonFilter * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0044bd07
    PUSH EAX                            ; 0044bd0a
    CALL crt_unknown.c_FUN_00564494     ; 0044bd0b
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 0044bd10
    JMP 0x0044bceb                      ; 0044bd13
        ;   XREF to: 0044bceb (UNCONDITIONAL_JUMP)  ; LAB_0044bceb

