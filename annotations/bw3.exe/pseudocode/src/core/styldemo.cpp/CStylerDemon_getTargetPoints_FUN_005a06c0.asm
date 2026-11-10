; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_styldemo_cpp_CStylerDemon_getTargetPoints_FUN_005a06c0(CStylerDemon *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CStylerDemon *   Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined4 DAT_02d24cfc
;   undefined4 DAT_02d24d00
;   undefined4 DAT_02d24d04
;
; Called Functions:
;   core_skeleton.cpp_FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a06c0
        ;   Label: core_styldemo.cpp_CStylerDemon_getTargetPoints_FUN_005a06c0
    PUSH ESI                            ; 005a06c1
    PUSH EDI                            ; 005a06c2
    PUSH EBP                            ; 005a06c3
    SUB ESP,0x48                        ; 005a06c4
    MOV EBX,dword ptr [ESP + 0x60]      ; 005a06c7
    MOV EDX,dword ptr [0x02d24d04]      ; 005a06cb | DAT_02d24d04
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005a06d1
    PUSH EDX                            ; 005a06d5
    ADD EAX,0x158                       ; 005a06d6
    MOV EBP,0x3                         ; 005a06db
    PUSH EAX                            ; 005a06e0
    LEA ESI,[ESP + 0x44]                ; 005a06e1
    LEA EDI,[ESP + 0x38]                ; 005a06e5
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 005a06e9
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x44]                ; 005a06ee
    ADD ESP,0x8                         ; 005a06f2
    LEA EAX,[ESP + 0x30]                ; 005a06f5
    MOVSD ES:EDI,ESI                    ; 005a06f9
    MOVSD ES:EDI,ESI                    ; 005a06fa
    MOVSD ES:EDI,ESI                    ; 005a06fb
    CMP EBX,EAX                         ; 005a06fc
    JZ 0x005a0714                       ; 005a06fe
        ;   XREF to: 005a0714 (CONDITIONAL_JUMP)  ; LAB_005a0714
    MOV EAX,dword ptr [ESP + 0x30]      ; 005a0700
    MOV dword ptr [EBX],EAX             ; 005a0704
    MOV EAX,dword ptr [ESP + 0x34]      ; 005a0706
    MOV dword ptr [EBX + 0x4],EAX       ; 005a070a
    MOV EAX,dword ptr [ESP + 0x38]      ; 005a070d
    MOV dword ptr [EBX + 0x8],EAX       ; 005a0711
    MOV ECX,dword ptr [0x02d24cfc]      ; 005a0714 | DAT_02d24cfc
        ;   Label: LAB_005a0714
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005a071a
    PUSH ECX                            ; 005a071e
    ADD EAX,0x158                       ; 005a071f
    PUSH EAX                            ; 005a0724
    LEA ESI,[ESP + 0x14]                ; 005a0725
    LEA EDI,[ESP + 0x20]                ; 005a0729
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 005a072d
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x14]                ; 005a0732
    LEA EAX,[ESP + 0x20]                ; 005a0736
    ADD ESP,0x8                         ; 005a073a
    LEA EDX,[EBX + 0xc]                 ; 005a073d
    MOVSD ES:EDI,ESI                    ; 005a0740
    MOVSD ES:EDI,ESI                    ; 005a0741
    MOVSD ES:EDI,ESI                    ; 005a0742
    CMP EDX,EAX                         ; 005a0743
    JZ 0x005a075b                       ; 005a0745
        ;   XREF to: 005a075b (CONDITIONAL_JUMP)  ; LAB_005a075b
    MOV EAX,dword ptr [ESP + 0x18]      ; 005a0747
    MOV dword ptr [EDX],EAX             ; 005a074b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005a074d
    MOV dword ptr [EDX + 0x4],EAX       ; 005a0751
    MOV EAX,dword ptr [ESP + 0x20]      ; 005a0754
    MOV dword ptr [EDX + 0x8],EAX       ; 005a0758
    MOV ESI,dword ptr [0x02d24d00]      ; 005a075b | DAT_02d24d00
        ;   Label: LAB_005a075b
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005a0761
    PUSH ESI                            ; 005a0765
    ADD EAX,0x158                       ; 005a0766
    LEA EDI,[ESP + 0x4]                 ; 005a076b
    PUSH EAX                            ; 005a076f
    LEA ESI,[ESP + 0x2c]                ; 005a0770
    ADD EBX,0x18                        ; 005a0774
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 005a0777
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    LEA ESI,[ESP + 0x2c]                ; 005a077c
    ADD ESP,0x8                         ; 005a0780
    MOV EAX,ESP                         ; 005a0783
    MOVSD ES:EDI,ESI                    ; 005a0785
    MOVSD ES:EDI,ESI                    ; 005a0786
    MOVSD ES:EDI,ESI                    ; 005a0787
    CMP EBX,EAX                         ; 005a0788
    JNZ 0x005a0796                      ; 005a078a
        ;   XREF to: 005a0796 (CONDITIONAL_JUMP)  ; LAB_005a0796
    MOV EAX,EBP                         ; 005a078c
    ADD ESP,0x48                        ; 005a078e
    POP EBP                             ; 005a0791
    POP EDI                             ; 005a0792
    POP ESI                             ; 005a0793
    POP EBX                             ; 005a0794
    RET                                 ; 005a0795
    MOV EAX,dword ptr [ESP]             ; 005a0796
        ;   Label: LAB_005a0796
    MOV dword ptr [EBX],EAX             ; 005a0799
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a079b
    MOV dword ptr [EBX + 0x4],EAX       ; 005a079f
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a07a2
    MOV dword ptr [EBX + 0x8],EAX       ; 005a07a6
    MOV EAX,EBP                         ; 005a07a9
    ADD ESP,0x48                        ; 005a07ab
    POP EBP                             ; 005a07ae
    POP EDI                             ; 005a07af
    POP ESI                             ; 005a07b0
    POP EBX                             ; 005a07b1
    RET                                 ; 005a07b2

