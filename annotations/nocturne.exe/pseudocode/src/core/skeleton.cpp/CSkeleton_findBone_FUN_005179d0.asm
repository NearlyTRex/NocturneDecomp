; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(int param_1,undefined4 param_2,int param_3)
;
;
; XREF[39]:
;   FUN_00439da0 at 00439dc8
;   FUN_004b3110 at 004b3138
;   FUN_004b6d80 at 004b71cb
;   FUN_004d4650 at 004d46b7
;   FUN_0050a260 at 0050a298
;   FUN_00535450 at 0053547c
;   FUN_00540c20 at 00540cec
;   FUN_0054c3e0 at 0054c5ba
;   core_baron.cpp_CBaron_setup_FUN_004102c0 at 004102e8
;   core_batcreat.cpp_CBatCreature_setup_FUN_00412160 at 00412192
;   ... and 29 more
;
; Referenced Globals:
;   string s_..\\core\\skeleton.cpp_005913b0
;   string s_Can't_find_bone_%s_in_skeleton_%_005913c5
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   crt_string.c__stricmp_FUN_00564520
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005179d0
        ;   Label: core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
    PUSH ESI                            ; 005179d1
    PUSH EDI                            ; 005179d2
    PUSH EBP                            ; 005179d3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005179d4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005179d8
    MOV EDX,dword ptr [EDI + 0x28558]   ; 005179dc
    XOR EBX,EBX                         ; 005179e2
    TEST EDX,EDX                        ; 005179e4
    JLE 0x00517a0a                      ; 005179e6
        ;   XREF to: 00517a0a (CONDITIONAL_JUMP)  ; LAB_00517a0a
    LEA ESI,[EDI + 0x2855c]             ; 005179e8
    PUSH EBP                            ; 005179ee
        ;   Label: LAB_005179ee
    PUSH ESI                            ; 005179ef
    CALL crt_string.c__stricmp_FUN_00564520 ; 005179f0
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 005179f5
    TEST EAX,EAX                        ; 005179f8
    JZ 0x00517a1b                       ; 005179fa
        ;   XREF to: 00517a1b (CONDITIONAL_JUMP)  ; LAB_00517a1b
    INC EBX                             ; 005179fc
    MOV ECX,dword ptr [EDI + 0x28558]   ; 005179fd
    ADD ESI,0x24                        ; 00517a03
    CMP EBX,ECX                         ; 00517a06
    JL 0x005179ee                       ; 00517a08
        ;   XREF to: 005179ee (CONDITIONAL_JUMP)  ; LAB_005179ee
    CMP dword ptr [ESP + 0x1c],0x0      ; 00517a0a
        ;   Label: LAB_00517a0a
    JNZ 0x00517a22                      ; 00517a0f
        ;   XREF to: 00517a22 (CONDITIONAL_JUMP)  ; LAB_00517a22
    MOV EAX,0xffffffff                  ; 00517a11
    POP EBP                             ; 00517a16
    POP EDI                             ; 00517a17
    POP ESI                             ; 00517a18
    POP EBX                             ; 00517a19
    RET                                 ; 00517a1a
    MOV EAX,EBX                         ; 00517a1b
        ;   Label: LAB_00517a1b
    POP EBP                             ; 00517a1d
    POP EDI                             ; 00517a1e
    POP ESI                             ; 00517a1f
    POP EBX                             ; 00517a20
    RET                                 ; 00517a21
    ADD EDI,0x28508                     ; 00517a22
        ;   Label: LAB_00517a22
    PUSH EDI                            ; 00517a28
    PUSH EBP                            ; 00517a29
    MOV ESI,0x5913b0                    ; 00517a2a | = "..\\core\\skeleton.cpp"
    MOV EAX,0x16d                       ; 00517a2f
    PUSH 0x5913c5                       ; 00517a34 | = "Can't find bone %s in skeleton %s!"
    MOV dword ptr [0x01cc4800],ESI      ; 00517a39 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 00517a3f | DAT_01cc4804
    CALL FUN_004c8440                   ; 00517a44
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0xc                         ; 00517a49
    MOV EAX,0xffffffff                  ; 00517a4c
    POP EBP                             ; 00517a51
    POP EDI                             ; 00517a52
    POP ESI                             ; 00517a53
    POP EBX                             ; 00517a54
    RET                                 ; 00517a55

