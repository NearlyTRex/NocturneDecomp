; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack_esi core_set_cpp_transformToWorldSpace_FUN_00538ba0(CVector3i *input,CVector3i *output)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   input
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_set.cpp_CDemonSet_lightVerticies_FUN_00538dd0 at 00539030
;
; Referenced Globals:
;   undefined4 DAT_01c6e2d8
;   undefined4 DAT_01c6e2dc
;   undefined4 DAT_01c6e2e0
;   undefined4 DAT_01d72644
;   undefined4 DAT_01d72648
;   undefined4 DAT_01d7264c
;   undefined4 DAT_01d72650
;   undefined4 DAT_01d72654
;   undefined4 DAT_01d72658
;   undefined4 DAT_01d7265c
;   undefined4 DAT_01d72660
;   undefined4 DAT_01d72664
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538ba0
        ;   Label: core_set.cpp_transformToWorldSpace_FUN_00538ba0
    PUSH EDI                            ; 00538ba1
    SUB ESP,0xc                         ; 00538ba2
    MOV ECX,dword ptr [ESP + 0x18]      ; 00538ba5
    MOV EBX,ESI                         ; 00538ba9
    MOV EAX,[0x01d72644]                ; 00538bab | DAT_01d72644
    MOV EDX,dword ptr [ECX]             ; 00538bb0
    IMUL EDX                            ; 00538bb2
    SHRD EAX,EDX,0x10                   ; 00538bb4
    MOV ESI,EAX                         ; 00538bb8
    MOV EDX,dword ptr [ECX + 0x4]       ; 00538bba
    MOV EAX,[0x01d72650]                ; 00538bbd | DAT_01d72650
    IMUL EDX                            ; 00538bc2
    SHRD EAX,EDX,0x10                   ; 00538bc4
    MOV EDX,dword ptr [ECX + 0x8]       ; 00538bc8
    ADD ESI,EAX                         ; 00538bcb
    MOV EAX,[0x01d7265c]                ; 00538bcd | DAT_01d7265c
    IMUL EDX                            ; 00538bd2
    SHRD EAX,EDX,0x10                   ; 00538bd4
    MOV EDX,dword ptr [0x01c6e2d8]      ; 00538bd8 | DAT_01c6e2d8
    ADD EAX,ESI                         ; 00538bde
    ADD EDX,EAX                         ; 00538be0
    MOV EAX,[0x01d72648]                ; 00538be2 | DAT_01d72648
    MOV dword ptr [ESP],EDX             ; 00538be7
    MOV EDX,dword ptr [ECX]             ; 00538bea
    IMUL EDX                            ; 00538bec
    SHRD EAX,EDX,0x10                   ; 00538bee
    MOV ESI,EAX                         ; 00538bf2
    MOV EDX,dword ptr [ECX + 0x4]       ; 00538bf4
    MOV EAX,[0x01d72654]                ; 00538bf7 | DAT_01d72654
    IMUL EDX                            ; 00538bfc
    SHRD EAX,EDX,0x10                   ; 00538bfe
    MOV EDX,dword ptr [ECX + 0x8]       ; 00538c02
    ADD ESI,EAX                         ; 00538c05
    MOV EAX,[0x01d72660]                ; 00538c07 | DAT_01d72660
    IMUL EDX                            ; 00538c0c
    SHRD EAX,EDX,0x10                   ; 00538c0e
    MOV EDX,dword ptr [0x01c6e2dc]      ; 00538c12 | DAT_01c6e2dc
    ADD EAX,ESI                         ; 00538c18
    ADD EDX,EAX                         ; 00538c1a
    MOV EAX,[0x01d7264c]                ; 00538c1c | DAT_01d7264c
    MOV dword ptr [ESP + 0x4],EDX       ; 00538c21
    MOV EDX,dword ptr [ECX]             ; 00538c25
    IMUL EDX                            ; 00538c27
    SHRD EAX,EDX,0x10                   ; 00538c29
    MOV ESI,EAX                         ; 00538c2d
    MOV EDX,dword ptr [ECX + 0x4]       ; 00538c2f
    MOV EAX,[0x01d72658]                ; 00538c32 | DAT_01d72658
    IMUL EDX                            ; 00538c37
    SHRD EAX,EDX,0x10                   ; 00538c39
    MOV EDX,dword ptr [ECX + 0x8]       ; 00538c3d
    ADD ESI,EAX                         ; 00538c40
    MOV EAX,[0x01d72664]                ; 00538c42 | DAT_01d72664
    IMUL EDX                            ; 00538c47
    SHRD EAX,EDX,0x10                   ; 00538c49
    MOV EDX,dword ptr [0x01c6e2e0]      ; 00538c4d | DAT_01c6e2e0
    ADD EAX,ESI                         ; 00538c53
    MOV EDI,EBX                         ; 00538c55
    ADD EDX,EAX                         ; 00538c57
    MOV ESI,ESP                         ; 00538c59
    MOV dword ptr [ESP + 0x8],EDX       ; 00538c5b
    MOVSD ES:EDI,ESI                    ; 00538c5f
    MOVSD ES:EDI,ESI                    ; 00538c60
    MOVSD ES:EDI,ESI                    ; 00538c61
    MOV EAX,EBX                         ; 00538c62
    ADD ESP,0xc                         ; 00538c64
    POP EDI                             ; 00538c67
    POP EBX                             ; 00538c68
    RET                                 ; 00538c69

