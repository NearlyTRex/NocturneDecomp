; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CCloth_free_FUN_0043c300(CCloth *this_ptr)
;
; Parameters:
; CCloth *         Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_cloth.cpp_CCloth_allocMemory_FUN_0043c2a0 at 0043c2a6
;   core_cloth.cpp_FUN_0043c280 at 0043c285
;
; Called Functions:
;   crt_unknown.c_FUN_005a30b6
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c300
        ;   Label: core_cloth.cpp_CCloth_free_FUN_0043c300
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043c301
    MOV EDX,dword ptr [EBX + 0x3aafc]   ; 0043c305
    TEST EDX,EDX                        ; 0043c30b
    JNZ 0x0043c311                      ; 0043c30d
        ;   XREF to: 0043c311 (CONDITIONAL_JUMP)  ; LAB_0043c311
    POP EBX                             ; 0043c30f
    RET                                 ; 0043c310
    PUSH EDX                            ; 0043c311
        ;   Label: LAB_0043c311
    CALL crt_unknown.c_FUN_005a30b6     ; 0043c312
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 0043c317
    MOV dword ptr [EBX + 0x3aafc],0x0   ; 0043c31a
    POP EBX                             ; 0043c324
    RET                                 ; 0043c325

