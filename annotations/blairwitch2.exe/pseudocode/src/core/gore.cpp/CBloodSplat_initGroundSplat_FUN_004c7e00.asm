; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_CBloodSplat_initGroundSplat_FUN_004c7e00(CBloodSplat *this_ptr,CVector3f *position,EBloodType blood_type)
;
; Parameters:
; CBloodSplat *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; EBloodType       Stack[0xc]:4   blood_type
;
; XREF[1]:
;   core_gore.cpp_CGore_createGroundBloodSplat_FUN_004c97e0 at 004c9802
;
; Referenced Globals:
;   undefined4 DAT_005f7ba8
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c7e00
        ;   Label: core_gore.cpp_CBloodSplat_initGroundSplat_FUN_004c7e00
    PUSH ESI                            ; 004c7e01
    PUSH EDI                            ; 004c7e02
    MOV ESI,dword ptr [ESP + 0x10]      ; 004c7e03
    MOV EDI,dword ptr [ESP + 0x14]      ; 004c7e07
    LEA EAX,[ESI + 0x4]                 ; 004c7e0b
    MOV dword ptr [ESI + 0x10],0x0      ; 004c7e0e
    CMP EAX,EDI                         ; 004c7e15
    JZ 0x004c7e29                       ; 004c7e17
        ;   XREF to: 004c7e29 (CONDITIONAL_JUMP)  ; LAB_004c7e29
    MOV EDX,dword ptr [EDI]             ; 004c7e19
    MOV dword ptr [EAX],EDX             ; 004c7e1b
    MOV EDX,dword ptr [EDI + 0x4]       ; 004c7e1d
    MOV dword ptr [EAX + 0x4],EDX       ; 004c7e20
    MOV EDX,dword ptr [EDI + 0x8]       ; 004c7e23
    MOV dword ptr [EAX + 0x8],EDX       ; 004c7e26
    PUSH 0x3                            ; 004c7e29
        ;   Label: LAB_004c7e29
    PUSH 0x0                            ; 004c7e2b
    LEA EBX,[ESI + 0x2c]                ; 004c7e2d
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 004c7e30
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004c7e35
    MOV dword ptr [ESI + 0x28],EAX      ; 004c7e38
    MOV EAX,EDI                         ; 004c7e3b
    MOV dword ptr [ESI + 0x24],0x0      ; 004c7e3d
    FLD float ptr [EAX]                 ; 004c7e44
    FMUL float ptr [0x005f7ba8]         ; 004c7e46 | DAT_005f7ba8
    FISTP dword ptr [EBX]               ; 004c7e4c
    FLD float ptr [EAX + 0x4]           ; 004c7e4e
    FMUL float ptr [0x005f7ba8]         ; 004c7e51 | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x4]         ; 004c7e57
    FLD float ptr [EAX + 0x8]           ; 004c7e5a
    FMUL float ptr [0x005f7ba8]         ; 004c7e5d | DAT_005f7ba8
    FISTP dword ptr [EBX + 0x8]         ; 004c7e63
    MOV dword ptr [ESI + 0x38],0x0      ; 004c7e66
    MOV dword ptr [ESI + 0x3c],0xffff   ; 004c7e6d
    MOV dword ptr [ESI + 0x40],0x0      ; 004c7e74
    MOV dword ptr [ESI],0x0             ; 004c7e7b
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c7e81
    MOV dword ptr [ESI + 0x20],0x0      ; 004c7e85
    MOV dword ptr [ESI + 0x14],EAX      ; 004c7e8c
    MOV EAX,dword ptr [ESI + 0x20]      ; 004c7e8f
    MOV dword ptr [ESI + 0x1c],EAX      ; 004c7e92
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004c7e95
    MOV dword ptr [ESI + 0x18],EAX      ; 004c7e98
    POP EDI                             ; 004c7e9b
    POP ESI                             ; 004c7e9c
    POP EBX                             ; 004c7e9d
    RET                                 ; 004c7e9e

