; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_createWallBloodSplat_FUN_004e6020(CGore *this_ptr,CVector3f *position,CVector3f *normal,EBloodType blood_type)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   normal
; EBloodType       Stack[0x10]:4   blood_type
;
; XREF[1]:
;   core_gore.cpp_FUN_004e4730 at 004e4773
;
; Called Functions:
;   core_gore.cpp_CBloodSplat_initWallSplat_FUN_004e4830
;   core_gore.cpp_CGore_allocateBloodSplat_FUN_004e5fa0
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x10],0x2      ; 004e6020
        ;   Label: core_gore.cpp_CGore_createWallBloodSplat_FUN_004e6020
    JNZ 0x004e6028                      ; 004e6025
        ;   XREF to: 004e6028 (CONDITIONAL_JUMP)  ; LAB_004e6028
    RET                                 ; 004e6027
    PUSH EDI                            ; 004e6028
        ;   Label: LAB_004e6028
    PUSH ESI                            ; 004e6029
    PUSH EBX                            ; 004e602a
    MOV ECX,dword ptr [ESP + 0x10]      ; 004e602b
    PUSH ECX                            ; 004e602f
    CALL core_gore.cpp_CGore_allocateBloodSplat_FUN_004e5fa0 ; 004e6030
        ;   XREF to: 004e5fa0 (UNCONDITIONAL_CALL)  ; CBloodSplat * core_gore.cpp_CGore_allocateBloodSplat_FUN_004e5fa0(CGore * this_ptr)
    ADD ESP,0x4                         ; 004e6035
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004e6038
    PUSH EBX                            ; 004e603c
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004e603d
    PUSH ESI                            ; 004e6041
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004e6042
    PUSH EDI                            ; 004e6046
    PUSH EAX                            ; 004e6047
    CALL core_gore.cpp_CBloodSplat_initWallSplat_FUN_004e4830 ; 004e6048
        ;   XREF to: 004e4830 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodSplat_initWallSplat_FUN_004e4830(CBloodSplat * this_ptr, CVector3f * position, CVector3f * normal, EBloodType blood_type)
    ADD ESP,0x10                        ; 004e604d
    POP EBX                             ; 004e6050
    POP ESI                             ; 004e6051
    POP EDI                             ; 004e6052
    RET                                 ; 004e6053

