; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_plotPixel_FUN_00401130(int x,int y)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
;
; XREF[13]:
;   core_actor.cpp_FUN_00409940 at 00409b1a
;   core_actor.cpp_plotPixelWithBoundsCheck_FUN_004096b0 at 004096d3
;   core_setdir.cpp_FUN_0055b4f0 at 0055b6d9
;   engine_2d.c_FUN_00402ade at 00402b81
;   engine_2d.c_drawLine_FUN_004011a0 at 004011f6
;   engine_2d.c_project3DPointToScreen_FUN_00401780 at 004017bc
;   shape_edittool.cpp_FUN_0049293e at 0049295e
;   shape_edittool.cpp_FUN_00492970 at 004929cd
;   shape_edittool.cpp_FUN_00492a40 at 00492b95
;   shape_edittool.cpp_FUN_00497870 at 004979ee
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c4f020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401130
        ;   Label: engine_2d.c_plotPixel_FUN_00401130
    MOV ECX,dword ptr [ESP + 0x8]       ; 00401131
    MOV EAX,dword ptr [ESP + 0xc]       ; 00401135
    MOV EDX,dword ptr [0x0061b4a0]      ; 00401139 | DAT_0061b4a0
    SHL EAX,0x2                         ; 0040113f
    CMP EDX,0x8                         ; 00401142
    JZ 0x00401175                       ; 00401145
        ;   XREF to: 00401175 (CONDITIONAL_JUMP)  ; LAB_00401175
    MOV EDX,dword ptr [0x01c4f020]      ; 00401147 | DAT_01c4f020
    MOV EBX,dword ptr [0x0061b4a0]      ; 0040114d | DAT_0061b4a0
    AND EDX,0xff                        ; 00401153
    CMP EBX,0x10                        ; 00401159
    JNZ 0x00401185                      ; 0040115c
        ;   XREF to: 00401185 (CONDITIONAL_JUMP)  ; LAB_00401185
    MOV EAX,dword ptr [EAX + 0x1c4354c] ; 0040115e | DAT_01c4354c
    ADD ECX,ECX                         ; 00401164
    ADD ECX,EAX                         ; 00401166
    MOV AX,word ptr [EDX*0x2 + 0x1c4dad0] ; 00401168
    MOV word ptr [ECX],AX               ; 00401170
    POP EBX                             ; 00401173
    RET                                 ; 00401174
    MOV EDX,dword ptr [EAX + 0x1c4354c] ; 00401175 | DAT_01c4354c
        ;   Label: LAB_00401175
    MOV AL,[0x01c4f020]                 ; 0040117b | DAT_01c4f020
    MOV byte ptr [ECX + EDX*0x1],AL     ; 00401180
    POP EBX                             ; 00401183
    RET                                 ; 00401184
    SHL ECX,0x2                         ; 00401185
        ;   Label: LAB_00401185
    MOV EAX,dword ptr [EAX + 0x1c4354c] ; 00401188 | DAT_01c4354c
    ADD ECX,EAX                         ; 0040118e
    MOV EAX,dword ptr [EDX*0x4 + 0x1c4dcd0] ; 00401190
    MOV dword ptr [ECX],EAX             ; 00401197
    POP EBX                             ; 00401199
    RET                                 ; 0040119a

