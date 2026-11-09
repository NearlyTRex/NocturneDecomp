; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_FUN_0047cf20(CDraculaBride *this_ptr,int part_index,CVector3f *initial_velocity,int render_in_background)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
; CVector3f *      Stack[0xc]:4   initial_velocity
; int              Stack[0x10]:4   render_in_background
;
; XREF[1]:
;   core_dracbrid.cpp_FUN_0047cc20 at 0047ccac
;
; Called Functions:
;   core_bodypart.cpp_FUN_00418940
;   core_bodypart.cpp_FUN_00419b90
;   core_charactr.cpp_FUN_00431210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047cf20
        ;   Label: core_dracbrid.cpp_FUN_0047cf20
    PUSH EBP                            ; 0047cf21
    MOV EBX,dword ptr [ESP + 0xc]       ; 0047cf22
    LEA EAX,[EBX + 0x24a8]              ; 0047cf26
    CMP byte ptr [EAX],0x0              ; 0047cf2c
    JZ 0x0047cf3f                       ; 0047cf2f
        ;   XREF to: 0047cf3f (CONDITIONAL_JUMP)  ; LAB_0047cf3f
    MOV EAX,dword ptr [ESP + 0x10]      ; 0047cf31
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0047cf35
    JNZ 0x0047cf42                      ; 0047cf3d
        ;   XREF to: 0047cf42 (CONDITIONAL_JUMP)  ; LAB_0047cf42
    POP EBP                             ; 0047cf3f
        ;   Label: LAB_0047cf3f
    POP EBX                             ; 0047cf40
    RET                                 ; 0047cf41
    PUSH EDI                            ; 0047cf42
        ;   Label: LAB_0047cf42
    PUSH ESI                            ; 0047cf43
    MOV ECX,dword ptr [EBX + 0x27a0]    ; 0047cf44
    PUSH ECX                            ; 0047cf4a
    PUSH 0x0                            ; 0047cf4b
    PUSH 0x0                            ; 0047cf4d
    PUSH EBX                            ; 0047cf4f
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0047cf50
    PUSH ESI                            ; 0047cf54
    LEA EAX,[EBX + 0x30]                ; 0047cf55
    PUSH EAX                            ; 0047cf58
    LEA EAX,[EBX + 0x20]                ; 0047cf59
    PUSH EAX                            ; 0047cf5c
    CALL core_bodypart.cpp_FUN_00418940 ; 0047cf5d
        ;   XREF to: 00418940 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_FUN_00418940(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 0047cf62
    MOV EDI,dword ptr [ESP + 0x20]      ; 0047cf65
    PUSH EDI                            ; 0047cf69
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0047cf6a
    PUSH EBP                            ; 0047cf6e
    PUSH EAX                            ; 0047cf6f
    PUSH EBX                            ; 0047cf70
    MOV ESI,EAX                         ; 0047cf71
    CALL core_charactr.cpp_FUN_00431210 ; 0047cf73
        ;   XREF to: 00431210 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00431210(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 0047cf78
    PUSH ESI                            ; 0047cf7b
    CALL core_bodypart.cpp_FUN_00419b90 ; 0047cf7c
        ;   XREF to: 00419b90 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_FUN_00419b90(CBodyPart * this_ptr)
    MOV EAX,dword ptr [EBX + 0xc314]    ; 0047cf81
    MOV dword ptr [EBX + EAX*0x4 + 0xc318],ESI ; 0047cf87
    INC dword ptr [EBX + 0xc314]        ; 0047cf8e
    MOV dword ptr [ESI + 0xfc],0x1      ; 0047cf94
    MOV dword ptr [ESI + 0xcb4],0x1     ; 0047cf9e
    ADD ESP,0x4                         ; 0047cfa8
    MOV dword ptr [ESI + 0xcc0],0xffff  ; 0047cfab
    POP ESI                             ; 0047cfb5
    POP EDI                             ; 0047cfb6
    POP EBP                             ; 0047cfb7
    POP EBX                             ; 0047cfb8
    RET                                 ; 0047cfb9

