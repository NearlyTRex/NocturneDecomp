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
;   core_actor.cpp_FUN_00409af0 at 00409cca
;   core_actor.cpp_plotPixelWithBoundsCheck_FUN_00409860 at 00409883
;   core_setdir.cpp_CZThumb_render_FUN_00538a60 at 00538bcd
;   engine_2d.c_FUN_00402ade at 00402b81
;   engine_2d.c_drawLine_FUN_004011a0 at 004011f6
;   engine_2d.c_project3DPointToScreen_FUN_00401780 at 004017bc
;   shape_edittool.cpp_FUN_0047a44e at 0047a46e
;   shape_edittool.cpp_FUN_0047a480 at 0047a4dd
;   shape_edittool.cpp_FUN_0047a590 at 0047a6e5
;   shape_edittool.cpp_FUN_0047f210 at 0047f38e
;   ... and 3 more
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c35e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401130
        ;   Label: engine_2d.c_plotPixel_FUN_00401130
    MOV ECX,dword ptr [ESP + 0x8]       ; 00401131
    MOV EAX,dword ptr [ESP + 0xc]       ; 00401135
    MOV EDX,dword ptr [0x006141c0]      ; 00401139 | DAT_006141c0
    SHL EAX,0x2                         ; 0040113f
    CMP EDX,0x8                         ; 00401142
    JZ 0x00401175                       ; 00401145
        ;   XREF to: 00401175 (CONDITIONAL_JUMP)  ; LAB_00401175
    MOV EDX,dword ptr [0x01c35e60]      ; 00401147 | DAT_01c35e60
    MOV EBX,dword ptr [0x006141c0]      ; 0040114d | DAT_006141c0
    AND EDX,0xff                        ; 00401153
    CMP EBX,0x10                        ; 00401159
    JNZ 0x00401185                      ; 0040115c
        ;   XREF to: 00401185 (CONDITIONAL_JUMP)  ; LAB_00401185
    MOV EAX,dword ptr [EAX + 0x1c2a38c] ; 0040115e | DAT_01c2a38c
    ADD ECX,ECX                         ; 00401164
    ADD ECX,EAX                         ; 00401166
    MOV AX,word ptr [EDX*0x2 + 0x1c34910] ; 00401168
    MOV word ptr [ECX],AX               ; 00401170
    POP EBX                             ; 00401173
    RET                                 ; 00401174
    MOV EDX,dword ptr [EAX + 0x1c2a38c] ; 00401175 | DAT_01c2a38c
        ;   Label: LAB_00401175
    MOV AL,[0x01c35e60]                 ; 0040117b | DAT_01c35e60
    MOV byte ptr [ECX + EDX*0x1],AL     ; 00401180
    POP EBX                             ; 00401183
    RET                                 ; 00401184
    SHL ECX,0x2                         ; 00401185
        ;   Label: LAB_00401185
    MOV EAX,dword ptr [EAX + 0x1c2a38c] ; 00401188 | DAT_01c2a38c
    ADD ECX,EAX                         ; 0040118e
    MOV EAX,dword ptr [EDX*0x4 + 0x1c34b10] ; 00401190
    MOV dword ptr [ECX],EAX             ; 00401197
    POP EBX                             ; 00401199
    RET                                 ; 0040119a

