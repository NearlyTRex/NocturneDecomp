; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_construc_cpp_CConstruct_getTargetPoints_FUN_004471a0(CConstruct *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CConstruct *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Referenced Globals:
;   undefined4 DAT_007dc5b0
;   undefined4 DAT_007dc5e0
;   undefined4 DAT_007dc5e8
;
; Called Functions:
;   core_skeleton.cpp_FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004471a0
        ;   Label: core_construc.cpp_CConstruct_getTargetPoints_FUN_004471a0
    PUSH ESI                            ; 004471a1
    PUSH EDI                            ; 004471a2
    PUSH EBP                            ; 004471a3
    SUB ESP,0x48                        ; 004471a4
    MOV EBP,dword ptr [ESP + 0x5c]      ; 004471a7
    MOV EBX,dword ptr [ESP + 0x60]      ; 004471ab
    MOV EDX,dword ptr [0x007dc5b0]      ; 004471af | DAT_007dc5b0
    PUSH EDX                            ; 004471b5
    LEA EAX,[EBP + 0x158]               ; 004471b6
    PUSH EAX                            ; 004471bc
    LEA ESI,[ESP + 0x44]                ; 004471bd
    LEA EDI,[ESP + 0x14]                ; 004471c1
    CALL core_skeleton.cpp_FUN_00569130 ; 004471c5
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x44]                ; 004471ca
    ADD ESP,0x8                         ; 004471ce
    LEA EAX,[ESP + 0xc]                 ; 004471d1
    MOVSD ES:EDI,ESI                    ; 004471d5
    MOVSD ES:EDI,ESI                    ; 004471d6
    MOVSD ES:EDI,ESI                    ; 004471d7
    CMP EBX,EAX                         ; 004471d8
    JZ 0x004471f0                       ; 004471da
        ;   XREF to: 004471f0 (CONDITIONAL_JUMP)  ; LAB_004471f0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004471dc
    MOV dword ptr [EBX],EAX             ; 004471e0
    MOV EAX,dword ptr [ESP + 0x10]      ; 004471e2
    MOV dword ptr [EBX + 0x4],EAX       ; 004471e6
    MOV EAX,dword ptr [ESP + 0x14]      ; 004471e9
    MOV dword ptr [EBX + 0x8],EAX       ; 004471ed
    MOV ECX,dword ptr [0x007dc5e0]      ; 004471f0 | DAT_007dc5e0
        ;   Label: LAB_004471f0
    PUSH ECX                            ; 004471f6
    LEA EAX,[EBP + 0x158]               ; 004471f7
    PUSH EAX                            ; 004471fd
    LEA ESI,[ESP + 0x20]                ; 004471fe
    LEA EDI,[ESP + 0x2c]                ; 00447202
    CALL core_skeleton.cpp_FUN_00569130 ; 00447206
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x20]                ; 0044720b
    LEA EAX,[ESP + 0x2c]                ; 0044720f
    ADD ESP,0x8                         ; 00447213
    LEA EDX,[EBX + 0xc]                 ; 00447216
    MOVSD ES:EDI,ESI                    ; 00447219
    MOVSD ES:EDI,ESI                    ; 0044721a
    MOVSD ES:EDI,ESI                    ; 0044721b
    CMP EDX,EAX                         ; 0044721c
    JZ 0x00447234                       ; 0044721e
        ;   XREF to: 00447234 (CONDITIONAL_JUMP)  ; LAB_00447234
    MOV EAX,dword ptr [ESP + 0x24]      ; 00447220
    MOV dword ptr [EDX],EAX             ; 00447224
    MOV EAX,dword ptr [ESP + 0x28]      ; 00447226
    MOV dword ptr [EDX + 0x4],EAX       ; 0044722a
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0044722d
    MOV dword ptr [EDX + 0x8],EAX       ; 00447231
    MOV ESI,dword ptr [0x007dc5e8]      ; 00447234 | DAT_007dc5e8
        ;   Label: LAB_00447234
    PUSH ESI                            ; 0044723a
    LEA EAX,[EBP + 0x158]               ; 0044723b
    PUSH EAX                            ; 00447241
    LEA ESI,[ESP + 0x8]                 ; 00447242
    LEA EDI,[ESP + 0x38]                ; 00447246
    CALL core_skeleton.cpp_FUN_00569130 ; 0044724a
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[ESP + 0x8]                 ; 0044724f
    LEA EAX,[ESP + 0x38]                ; 00447253
    ADD ESP,0x8                         ; 00447257
    LEA EDX,[EBX + 0x18]                ; 0044725a
    MOVSD ES:EDI,ESI                    ; 0044725d
    MOVSD ES:EDI,ESI                    ; 0044725e
    MOVSD ES:EDI,ESI                    ; 0044725f
    CMP EDX,EAX                         ; 00447260
    JNZ 0x00447271                      ; 00447262
        ;   XREF to: 00447271 (CONDITIONAL_JUMP)  ; LAB_00447271
    MOV EAX,0x3                         ; 00447264
    ADD ESP,0x48                        ; 00447269
    POP EBP                             ; 0044726c
    POP EDI                             ; 0044726d
    POP ESI                             ; 0044726e
    POP EBX                             ; 0044726f
    RET                                 ; 00447270
    MOV EAX,dword ptr [ESP + 0x30]      ; 00447271
        ;   Label: LAB_00447271
    MOV dword ptr [EDX],EAX             ; 00447275
    MOV EAX,dword ptr [ESP + 0x34]      ; 00447277
    MOV dword ptr [EDX + 0x4],EAX       ; 0044727b
    MOV EAX,dword ptr [ESP + 0x38]      ; 0044727e
    MOV dword ptr [EDX + 0x8],EAX       ; 00447282
    MOV EAX,0x3                         ; 00447285
    ADD ESP,0x48                        ; 0044728a
    POP EBP                             ; 0044728d
    POP EDI                             ; 0044728e
    POP ESI                             ; 0044728f
    POP EBX                             ; 00447290
    RET                                 ; 00447291

