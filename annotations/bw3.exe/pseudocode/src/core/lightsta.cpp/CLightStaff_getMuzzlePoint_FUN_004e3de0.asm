; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_lightsta_cpp_CLightStaff_getMuzzlePoint_FUN_004e3de0(CLightStaff *this_ptr,CVector3f *out_point)
;
; Parameters:
; CLightStaff *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_point
;
; Referenced Globals:
;   undefined4 DAT_005c6aa6
;   undefined4 DAT_005c6aaa
;
; Called Functions:
;   core_weapon.cpp_CWeapon_getMuzzlePoint_FUN_0057b820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e3de0
        ;   Label: core_lightsta.cpp_CLightStaff_getMuzzlePoint_FUN_004e3de0
    PUSH EDI                            ; 004e3de1
    SUB ESP,0x24                        ; 004e3de2
    MOV EBX,ESI                         ; 004e3de5
    MOV EDX,dword ptr [ESP + 0x30]      ; 004e3de7
    PUSH EDX                            ; 004e3deb
    LEA ESI,[ESP + 0x4]                 ; 004e3dec
    LEA EDI,[ESP + 0x1c]                ; 004e3df0
    CALL core_weapon.cpp_CWeapon_getMuzzlePoint_FUN_0057b820 ; 004e3df4
        ;   XREF to: 0057b820 (UNCONDITIONAL_CALL)  ; CVector3f * core_weapon.cpp_CWeapon_getMuzzlePoint_FUN_0057b820(CWeapon * this_ptr, CVector3f * out_point)
    LEA ESI,[ESP + 0x4]                 ; 004e3df9
    ADD ESP,0x4                         ; 004e3dfd
    MOVSD ES:EDI,ESI                    ; 004e3e00
    MOVSD ES:EDI,ESI                    ; 004e3e01
    MOVSD ES:EDI,ESI                    ; 004e3e02
    LEA EAX,[ESP + 0x18]                ; 004e3e03
    LEA ESI,[ESP + 0xc]                 ; 004e3e07
    CMP ESI,EAX                         ; 004e3e0b
    JNZ 0x004e3e40                      ; 004e3e0d
        ;   XREF to: 004e3e40 (CONDITIONAL_JUMP)  ; LAB_004e3e40
    FLD float ptr [ESP + 0xc]           ; 004e3e0f
        ;   Label: LAB_004e3e0f
    FLD float ptr [ESP + 0x10]          ; 004e3e13
    LEA ESI,[ESP + 0xc]                 ; 004e3e17
    MOV EDI,EBX                         ; 004e3e1b
    FADD float ptr [0x005c6aaa]         ; 004e3e1d | DAT_005c6aaa
    FXCH                                ; 004e3e23
    FADD float ptr [0x005c6aa6]         ; 004e3e25 | DAT_005c6aa6
    FXCH                                ; 004e3e2b
    FSTP float ptr [ESP + 0x10]         ; 004e3e2d
    FSTP float ptr [ESP + 0xc]          ; 004e3e31
    MOVSD ES:EDI,ESI                    ; 004e3e35
    MOVSD ES:EDI,ESI                    ; 004e3e36
    MOVSD ES:EDI,ESI                    ; 004e3e37
    MOV EAX,EBX                         ; 004e3e38
    ADD ESP,0x24                        ; 004e3e3a
    POP EDI                             ; 004e3e3d
    POP EBX                             ; 004e3e3e
    RET                                 ; 004e3e3f
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e3e40
        ;   Label: LAB_004e3e40
    MOV dword ptr [ESP + 0xc],EAX       ; 004e3e44
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004e3e48
    MOV dword ptr [ESP + 0x10],EAX      ; 004e3e4c
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e3e50
    MOV dword ptr [ESP + 0x14],EAX      ; 004e3e54
    JMP 0x004e3e0f                      ; 004e3e58
        ;   XREF to: 004e3e0f (UNCONDITIONAL_JUMP)  ; LAB_004e3e0f

