; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __stack2_esi core_stranger_cpp_CStranger_getCarryObjToBodyXForm_FUN_005c5170(CStranger *this_ptr,int hand_index,CMatrix3x4f *out_matrix)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   hand_index
; Local Variables:
; CMatrix3x4f      Stack[-0x38]:48  local_38
;
; Called Functions:
;   core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_005c07b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5170
        ;   Label: core_stranger.cpp_CStranger_getCarryObjToBodyXForm_FUN_005c5170
    PUSH EDI                            ; 005c5171
    SUB ESP,0x30                        ; 005c5172
    MOV EDX,dword ptr [ESP + 0x40]      ; 005c5175
    MOV EBX,ESI                         ; 005c5179
    MOV ESI,dword ptr [ESP + 0x3c]      ; 005c517b
    MOV EAX,EDX                         ; 005c517f
    SHL EAX,0x4                         ; 005c5181
    ADD EAX,EDX                         ; 005c5184
    PUSH EDX                            ; 005c5186
    MOV EDX,dword ptr [ESI + EAX*0x4 + 0x24b4] ; 005c5187
    PUSH EDX                            ; 005c518e
    PUSH ESI                            ; 005c518f
    LEA ESI,[ESP + 0xc]                 ; 005c5190
    MOV EDI,EBX                         ; 005c5194
    CALL core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_005c07b0 ; 005c5196
        ;   XREF to: 005c07b0 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_stranger.cpp_CStranger_computeWeaponAttachXForm_FUN_005c07b0(CStranger * this_ptr, CDemonActor * carried_actor, int hand_index, CMatrix3x4f * output_matrix)
    JMP 0x03fc3cfb                      ; 005c519b
        ;   XREF to: 03fc3cfb (UNCONDITIONAL_JUMP)  ; LAB_03fc3cfb
    MOV EAX,EBX                         ; 005c51a9
        ;   Label: LAB_005c51a9
    ADD ESP,0x30                        ; 005c51ab
    POP EDI                             ; 005c51ae
    POP EBX                             ; 005c51af
    RET                                 ; 005c51b0
    MOV ECX,0xc                         ; 03fc3cfb
        ;   Label: LAB_03fc3cfb
    LEA ESI,[ESP + 0xc]                 ; 03fc3d00
    ADD ESP,0xc                         ; 03fc3d04
    MOV ECX,dword ptr [ESI]             ; 03fc3d07
    MOV dword ptr [EDI],ECX             ; 03fc3d09
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc3d0b
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc3d0e
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc3d11
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc3d14
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc3d17
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc3d1a
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc3d1d
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc3d20
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc3d23
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc3d26
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc3d29
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc3d2c
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc3d2f
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc3d32
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc3d35
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc3d38
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc3d3b
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc3d3e
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc3d41
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc3d44
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc3d47
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc3d4a
    ADD ESI,0x30                        ; 03fc3d4d
    ADD EDI,0x30                        ; 03fc3d50
    XOR ECX,ECX                         ; 03fc3d53
    JMP 0x005c51a9                      ; 03fc3d55
        ;   XREF to: 005c51a9 (UNCONDITIONAL_JUMP)  ; LAB_005c51a9

