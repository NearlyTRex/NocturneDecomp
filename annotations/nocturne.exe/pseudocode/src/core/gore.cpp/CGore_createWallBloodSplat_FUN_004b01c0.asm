; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CGore_createWallBloodSplat_FUN_004b01c0(CGore *this_ptr,CVector3f *position,CVector3f *normal,int blood_type)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; CVector3f *      Stack[0xc]:4   normal
; int              Stack[0x10]:4   blood_type
;
; XREF[1]:
;   core_gore.cpp_CBloodParticle_onCollision_FUN_004ae900 at 004ae943
;
; Called Functions:
;   core_gore.cpp_CBloodSplat_initWallSplat_FUN_004aea00
;   core_gore.cpp_CGore_allocateBloodSplat_FUN_004b0140
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x10],0x2      ; 004b01c0
        ;   Label: core_gore.cpp_CGore_createWallBloodSplat_FUN_004b01c0
    JNZ 0x004b01c8                      ; 004b01c5
        ;   XREF to: 004b01c8 (CONDITIONAL_JUMP)  ; LAB_004b01c8
    RET                                 ; 004b01c7
    PUSH EDI                            ; 004b01c8
        ;   Label: LAB_004b01c8
    PUSH ESI                            ; 004b01c9
    PUSH EBX                            ; 004b01ca
    MOV ECX,dword ptr [ESP + 0x10]      ; 004b01cb
    PUSH ECX                            ; 004b01cf
    CALL core_gore.cpp_CGore_allocateBloodSplat_FUN_004b0140 ; 004b01d0
        ;   XREF to: 004b0140 (UNCONDITIONAL_CALL)  ; CBloodSplat * core_gore.cpp_CGore_allocateBloodSplat_FUN_004b0140(CGore * this_ptr)
    ADD ESP,0x4                         ; 004b01d5
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004b01d8
    PUSH EBX                            ; 004b01dc
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004b01dd
    PUSH ESI                            ; 004b01e1
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004b01e2
    PUSH EDI                            ; 004b01e6
    PUSH EAX                            ; 004b01e7
    CALL core_gore.cpp_CBloodSplat_initWallSplat_FUN_004aea00 ; 004b01e8
        ;   XREF to: 004aea00 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CBloodSplat_initWallSplat_FUN_004aea00(CBloodSplat * this_ptr, CVector3f * position, CVector3f * normal, int blood_type)
    ADD ESP,0x10                        ; 004b01ed
    POP EBX                             ; 004b01f0
    POP ESI                             ; 004b01f1
    POP EDI                             ; 004b01f2
    RET                                 ; 004b01f3

