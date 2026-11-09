; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createCrater_FUN_004a3aa0(CFireEffect *this_ptr,CVector3f *position,float radius)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   radius
;
; XREF[1]:
;   core_fire.cpp_FUN_004a36e0 at 004a377e
;
; Referenced Globals:
;   undefined4 DAT_01cfaff4
;
; Called Functions:
;   core_fire.cpp_FUN_0049d590
;
; *****************************************************************************

section .text

    PUSH dword ptr [ESP + 0xc]          ; 004a3aa0
        ;   Label: core_fire.cpp_CFireEffect_createCrater_FUN_004a3aa0
    MOV EAX,[0x01cfaff4]                ; 004a3aa4 | DAT_01cfaff4
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a3aa9
    SHL EAX,0x4                         ; 004a3aad
    PUSH EDX                            ; 004a3ab0
    MOV EDX,EAX                         ; 004a3ab1
    SHL EAX,0x3                         ; 004a3ab3
    SUB EAX,EDX                         ; 004a3ab6
    ADD EAX,0x1cfaff8                   ; 004a3ab8
    PUSH EAX                            ; 004a3abd
    CALL core_fire.cpp_FUN_0049d590     ; 004a3abe
        ;   XREF to: 0049d590 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_0049d590()
    MOV ECX,dword ptr [0x01cfaff4]      ; 004a3ac3 | DAT_01cfaff4
    INC ECX                             ; 004a3ac9
    ADD ESP,0xc                         ; 004a3aca
    MOV dword ptr [0x01cfaff4],ECX      ; 004a3acd | DAT_01cfaff4
    CMP ECX,0x14                        ; 004a3ad3
    JGE 0x004a3ad9                      ; 004a3ad6
        ;   XREF to: 004a3ad9 (CONDITIONAL_JUMP)  ; LAB_004a3ad9
    RET                                 ; 004a3ad8
    PUSH ESI                            ; 004a3ad9
        ;   Label: LAB_004a3ad9
    XOR ESI,ESI                         ; 004a3ada
    MOV dword ptr [0x01cfaff4],ESI      ; 004a3adc | DAT_01cfaff4
    POP ESI                             ; 004a3ae2
    RET                                 ; 004a3ae3

