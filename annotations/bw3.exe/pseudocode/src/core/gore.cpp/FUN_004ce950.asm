; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_FUN_004ce950(CGore *this_ptr,CVector3f *position,EBloodType blood_type)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; EBloodType       Stack[0xc]:4   blood_type
;
; XREF[1]:
;   core_gore.cpp_FUN_004cd3f0 at 004cd432
;
; Called Functions:
;   core_gore.cpp_CBloodSplat_initGroundSplat_FUN_004cd450
;   core_gore.cpp_CGore_allocateBloodSplat_FUN_004ce900
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x2       ; 004ce950
        ;   Label: core_gore.cpp_FUN_004ce950
    JNZ 0x004ce958                      ; 004ce955
        ;   XREF to: 004ce958 (CONDITIONAL_JUMP)  ; LAB_004ce958
    RET                                 ; 004ce957
    PUSH ESI                            ; 004ce958
        ;   Label: LAB_004ce958
    PUSH EBX                            ; 004ce959
    MOV ECX,dword ptr [ESP + 0xc]       ; 004ce95a
    PUSH ECX                            ; 004ce95e
    CALL core_gore.cpp_CGore_allocateBloodSplat_FUN_004ce900 ; 004ce95f
        ;   XREF to: 004ce900 (UNCONDITIONAL_CALL)  ; CBloodSplat * core_gore.cpp_CGore_allocateBloodSplat_FUN_004ce900(CGore * this_ptr)
    ADD ESP,0x4                         ; 004ce964
    MOV EBX,dword ptr [ESP + 0x14]      ; 004ce967
    PUSH EBX                            ; 004ce96b
    MOV ESI,dword ptr [ESP + 0x14]      ; 004ce96c
    PUSH ESI                            ; 004ce970
    PUSH EAX                            ; 004ce971
    CALL core_gore.cpp_CBloodSplat_initGroundSplat_FUN_004cd450 ; 004ce972
        ;   XREF to: 004cd450 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodSplat_initGroundSplat_FUN_004cd450(CBloodSplat * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 004ce977
    POP EBX                             ; 004ce97a
    POP ESI                             ; 004ce97b
    RET                                 ; 004ce97c

