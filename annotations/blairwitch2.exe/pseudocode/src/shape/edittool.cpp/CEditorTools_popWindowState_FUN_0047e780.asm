; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_popWindowState_FUN_0047e780(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   shape_edittool.cpp_CEditorTools_dtor_FUN_0047b690 at 0047b6a2
;   shape_edittool.cpp_FUN_0047e760 at 0047e76f
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005d238e
;   TerminatedCString s_CEditorTools_popWindow_c_005d23a4
;   undefined4 DAT_01c2559c
;   undefined4 DAT_01c35e38
;   undefined4 DAT_01c35e3c
;   undefined4 DAT_01c35e40
;   undefined4 DAT_01c35e44
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;   undefined4 DAT_01c35e58
;   undefined4 DAT_01c35e5c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_unknown.c_FUN_005b86a0
;   unkafter_minecar.cpp_setRenderViewport_FUN_004f2ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047e780
        ;   Label: shape_edittool.cpp_CEditorTools_popWindowState_FUN_0047e780
    PUSH ESI                            ; 0047e781
    PUSH EDI                            ; 0047e782
    CMP dword ptr [0x01c2559c],0x1      ; 0047e783 | DAT_01c2559c
    JL 0x0047e827                       ; 0047e78a
        ;   XREF to: 0047e827 (CONDITIONAL_JUMP)  ; LAB_0047e827
    MOV ESI,dword ptr [0x01c2559c]      ; 0047e790 | DAT_01c2559c
        ;   Label: LAB_0047e790
    DEC ESI                             ; 0047e796
    MOV dword ptr [0x01c2559c],ESI      ; 0047e797 | DAT_01c2559c
    LEA EBX,[ESI*0x8 + 0x0]             ; 0047e79d
    MOV EAX,EBX                         ; 0047e7a4
    SHL EBX,0x6                         ; 0047e7a6
    SUB EBX,EAX                         ; 0047e7a9
    ADD EBX,0x1c255a0                   ; 0047e7ab
    MOV EDI,dword ptr [EBX + 0x1d8]     ; 0047e7b1
    TEST EDI,EDI                        ; 0047e7b7
    JNZ 0x0047e84f                      ; 0047e7b9
        ;   XREF to: 0047e84f (CONDITIONAL_JUMP)  ; LAB_0047e84f
    PUSH dword ptr [EBX + 0x2c]         ; 0047e7bf
        ;   Label: LAB_0047e7bf
    PUSH dword ptr [EBX + 0x28]         ; 0047e7c2
    PUSH dword ptr [EBX + 0x24]         ; 0047e7c5
    PUSH dword ptr [EBX + 0x20]         ; 0047e7c8
    CALL unkafter_minecar.cpp_setRenderViewport_FUN_004f2ac0 ; 0047e7cb
        ;   XREF to: 004f2ac0 (UNCONDITIONAL_CALL)  ; void unkafter_minecar.cpp_setRenderViewport_FUN_004f2ac0(float left, float top, float right, float bottom)
    MOV EAX,dword ptr [EBX + 0x10]      ; 0047e7d0
    MOV [0x01c35e48],EAX                ; 0047e7d3 | DAT_01c35e48
    MOV EAX,dword ptr [EBX + 0x14]      ; 0047e7d8
    MOV [0x01c35e4c],EAX                ; 0047e7db | DAT_01c35e4c
    MOV EAX,dword ptr [EBX + 0x18]      ; 0047e7e0
    MOV [0x01c35e50],EAX                ; 0047e7e3 | DAT_01c35e50
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0047e7e8
    MOV [0x01c35e54],EAX                ; 0047e7eb | DAT_01c35e54
    MOV EAX,dword ptr [EBX + 0x30]      ; 0047e7f0
    MOV [0x01c35e38],EAX                ; 0047e7f3 | DAT_01c35e38
    MOV EAX,dword ptr [EBX + 0x34]      ; 0047e7f8
    MOV [0x01c35e3c],EAX                ; 0047e7fb | DAT_01c35e3c
    MOV EAX,dword ptr [EBX + 0x38]      ; 0047e800
    MOV [0x01c35e40],EAX                ; 0047e803 | DAT_01c35e40
    MOV EAX,dword ptr [EBX + 0x3c]      ; 0047e808
    MOV [0x01c35e44],EAX                ; 0047e80b | DAT_01c35e44
    MOV EAX,dword ptr [EBX + 0x40]      ; 0047e810
    MOV [0x01c35e58],EAX                ; 0047e813 | DAT_01c35e58
    MOV EAX,dword ptr [EBX + 0x44]      ; 0047e818
    ADD ESP,0x10                        ; 0047e81b
    MOV [0x01c35e5c],EAX                ; 0047e81e | DAT_01c35e5c
    POP EDI                             ; 0047e823
    POP ESI                             ; 0047e824
    POP EBX                             ; 0047e825
    RET                                 ; 0047e826
    MOV ECX,0x5d238e                    ; 0047e827 | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_0047e827
    MOV EBX,0x8b5                       ; 0047e82c
    PUSH 0x5d23a4                       ; 0047e831 | = "CEditorTools::popWindow() called but ..."
    MOV dword ptr [0x01d046a0],ECX      ; 0047e836 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0047e83c | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0047e842
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0047e847
    JMP 0x0047e790                      ; 0047e84a
        ;   XREF to: 0047e790 (UNCONDITIONAL_JUMP)  ; LAB_0047e790
    PUSH EDI                            ; 0047e84f
        ;   Label: LAB_0047e84f
    CALL crt_unknown.c_FUN_005b86a0     ; 0047e850
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 0047e855
    MOV dword ptr [EBX + 0x1d8],0x0     ; 0047e858
    JMP 0x0047e7bf                      ; 0047e862
        ;   XREF to: 0047e7bf (UNCONDITIONAL_JUMP)  ; LAB_0047e7bf

