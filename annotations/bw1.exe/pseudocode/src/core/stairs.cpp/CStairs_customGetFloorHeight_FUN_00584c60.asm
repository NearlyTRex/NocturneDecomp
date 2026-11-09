; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stairs_cpp_CStairs_customGetFloorHeight_FUN_00584c60(CStairs *this_ptr,CVector3f *position,float search_radius,float *out_floor_height)
;
; Parameters:
; CStairs *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   search_radius
; float *          Stack[0x10]:4   out_floor_height
;
; Called Functions:
;   core_dtri.cpp_FUN_00490a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00584c60
        ;   Label: core_stairs.cpp_CStairs_customGetFloorHeight_FUN_00584c60
    PUSH ESI                            ; 00584c61
    PUSH EDI                            ; 00584c62
    PUSH EBP                            ; 00584c63
    MOV EBP,dword ptr [ESP + 0x14]      ; 00584c64
    LEA ESI,[EBP + 0x170]               ; 00584c68
    XOR EBX,EBX                         ; 00584c6e
    XOR EDI,EDI                         ; 00584c70
    MOV EAX,dword ptr [EBP + 0x16c]     ; 00584c72
        ;   Label: LAB_00584c72
    ADD EAX,EAX                         ; 00584c78
    CMP EBX,EAX                         ; 00584c7a
    JL 0x00584c85                       ; 00584c7c
        ;   XREF to: 00584c85 (CONDITIONAL_JUMP)  ; LAB_00584c85
    MOV EAX,EDI                         ; 00584c7e
    POP EBP                             ; 00584c80
    POP EDI                             ; 00584c81
    POP ESI                             ; 00584c82
    POP EBX                             ; 00584c83
    RET                                 ; 00584c84
    MOV EDX,dword ptr [ESP + 0x20]      ; 00584c85
        ;   Label: LAB_00584c85
    PUSH EDX                            ; 00584c89
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00584c8a
    PUSH dword ptr [ESP + 0x20]         ; 00584c8e
    PUSH ECX                            ; 00584c92
    PUSH ESI                            ; 00584c93
    CALL core_dtri.cpp_FUN_00490a40     ; 00584c94
        ;   XREF to: 00490a40 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_00490a40(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 00584c99
    TEST EAX,EAX                        ; 00584c9c
    JZ 0x00584ca5                       ; 00584c9e
        ;   XREF to: 00584ca5 (CONDITIONAL_JUMP)  ; LAB_00584ca5
    MOV EDI,0x1                         ; 00584ca0
    INC EBX                             ; 00584ca5
        ;   Label: LAB_00584ca5
    ADD ESI,0x38                        ; 00584ca6
    JMP 0x00584c72                      ; 00584ca9
        ;   XREF to: 00584c72 (UNCONDITIONAL_JUMP)  ; LAB_00584c72

