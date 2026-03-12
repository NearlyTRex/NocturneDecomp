; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack_esi core_set_cpp_transformNormalFixedPoint_FUN_0056e960(CVector3i *input,CVector3i *output)
;
; Parameters:
; CVector3i *      Stack[0x4]:4   input
;
; Referenced Globals:
;   CMatrix3x3i g_TransformMatrix
;   undefined4 g_TransformMatrix[0][1]
;   undefined4 g_TransformMatrix[0][2]
;   undefined4 g_TransformMatrix[1][0]
;   undefined4 g_TransformMatrix[1][1]
;   undefined4 g_TransformMatrix[1][2]
;   undefined4 g_TransformMatrix[2][0]
;   undefined4 g_TransformMatrix[2][1]
;   undefined4 g_TransformMatrix[2][2]
;   CMatrix3x3i g_InverseMatrix
;   undefined4 g_InverseMatrix[0][1]
;   undefined4 g_InverseMatrix[0][2]
;   undefined4 g_InverseMatrix[1][0]
;   undefined4 g_InverseMatrix[1][1]
;   undefined4 g_InverseMatrix[1][2]
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e960
        ;   Label: core_set.cpp_transformNormalFixedPoint_FUN_0056e960
    PUSH EDI                            ; 0056e961
    SUB ESP,0x18                        ; 0056e962
    MOV ECX,dword ptr [ESP + 0x24]      ; 0056e965
    MOV EBX,ESI                         ; 0056e969
    MOV EAX,[0x02d052e8]                ; 0056e96b | g_TransformMatrix
    MOV EDX,dword ptr [ECX]             ; 0056e970
    IMUL EDX                            ; 0056e972
    SHRD EAX,EDX,0x10                   ; 0056e974
    MOV ESI,EAX                         ; 0056e978
    MOV EDX,dword ptr [ECX + 0x4]       ; 0056e97a
    MOV EAX,[0x02d052f4]                ; 0056e97d | g_TransformMatrix[1][0]
    IMUL EDX                            ; 0056e982
    SHRD EAX,EDX,0x10                   ; 0056e984
    MOV EDX,dword ptr [ECX + 0x8]       ; 0056e988
    ADD ESI,EAX                         ; 0056e98b
    MOV EAX,[0x02d05300]                ; 0056e98d | g_TransformMatrix[2][0]
    IMUL EDX                            ; 0056e992
    SHRD EAX,EDX,0x10                   ; 0056e994
    MOV EDX,dword ptr [ECX]             ; 0056e998
    ADD ESI,EAX                         ; 0056e99a
    MOV EAX,[0x02d052ec]                ; 0056e99c | g_TransformMatrix[0][1]
    MOV dword ptr [ESP + 0xc],ESI       ; 0056e9a1
    IMUL EDX                            ; 0056e9a5
    SHRD EAX,EDX,0x10                   ; 0056e9a7
    MOV ESI,EAX                         ; 0056e9ab
    MOV EDX,dword ptr [ECX + 0x4]       ; 0056e9ad
    MOV EAX,[0x02d052f8]                ; 0056e9b0 | g_TransformMatrix[1][1]
    IMUL EDX                            ; 0056e9b5
    SHRD EAX,EDX,0x10                   ; 0056e9b7
    MOV EDX,dword ptr [ECX + 0x8]       ; 0056e9bb
    ADD ESI,EAX                         ; 0056e9be
    MOV EAX,[0x02d05304]                ; 0056e9c0 | g_TransformMatrix[2][1]
    IMUL EDX                            ; 0056e9c5
    SHRD EAX,EDX,0x10                   ; 0056e9c7
    MOV EDX,dword ptr [ECX]             ; 0056e9cb
    ADD ESI,EAX                         ; 0056e9cd
    MOV EAX,[0x02d052f0]                ; 0056e9cf | g_TransformMatrix[0][2]
    MOV dword ptr [ESP + 0x10],ESI      ; 0056e9d4
    IMUL EDX                            ; 0056e9d8
    SHRD EAX,EDX,0x10                   ; 0056e9da
    MOV ESI,EAX                         ; 0056e9de
    MOV EDX,dword ptr [ECX + 0x4]       ; 0056e9e0
    MOV EAX,[0x02d052fc]                ; 0056e9e3 | g_TransformMatrix[1][2]
    IMUL EDX                            ; 0056e9e8
    SHRD EAX,EDX,0x10                   ; 0056e9ea
    MOV EDX,dword ptr [ECX + 0x8]       ; 0056e9ee
    ADD ESI,EAX                         ; 0056e9f1
    MOV EAX,[0x02d05308]                ; 0056e9f3 | g_TransformMatrix[2][2]
    IMUL EDX                            ; 0056e9f8
    SHRD EAX,EDX,0x10                   ; 0056e9fa
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056e9fe
    ADD ESI,EAX                         ; 0056ea02
    MOV EAX,[0x02f0d364]                ; 0056ea04 | g_InverseMatrix
    IMUL EDX                            ; 0056ea09
    SHRD EAX,EDX,0x10                   ; 0056ea0b
    MOV EDX,dword ptr [ESP + 0x10]      ; 0056ea0f
    MOV ECX,EAX                         ; 0056ea13
    MOV EAX,[0x02f0d370]                ; 0056ea15 | g_InverseMatrix[1][0]
    IMUL EDX                            ; 0056ea1a
    SHRD EAX,EDX,0x10                   ; 0056ea1c
    MOV EDX,ESI                         ; 0056ea20
    ADD ECX,EAX                         ; 0056ea22
    MOV EAX,[0x02f0d37c]                ; 0056ea24 | g_InverseMatrix[2][0]
    IMUL EDX                            ; 0056ea29
    SHRD EAX,EDX,0x10                   ; 0056ea2b
    ADD ECX,EAX                         ; 0056ea2f
    MOV dword ptr [ESP + 0x14],ESI      ; 0056ea31
    MOV dword ptr [ESP],ECX             ; 0056ea35
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056ea38
    MOV EAX,[0x02f0d368]                ; 0056ea3c | g_InverseMatrix[0][1]
    IMUL EDX                            ; 0056ea41
    SHRD EAX,EDX,0x10                   ; 0056ea43
    MOV EDX,dword ptr [ESP + 0x10]      ; 0056ea47
    MOV ECX,EAX                         ; 0056ea4b
    MOV EAX,[0x02f0d374]                ; 0056ea4d | g_InverseMatrix[1][1]
    IMUL EDX                            ; 0056ea52
    SHRD EAX,EDX,0x10                   ; 0056ea54
    MOV EDX,ESI                         ; 0056ea58
    ADD ECX,EAX                         ; 0056ea5a
    MOV EAX,[0x02f0d380]                ; 0056ea5c | g_InverseMatrix[2][1]
    IMUL EDX                            ; 0056ea61
    SHRD EAX,EDX,0x10                   ; 0056ea63
    MOV EDX,dword ptr [ESP + 0xc]       ; 0056ea67
    ADD ECX,EAX                         ; 0056ea6b
    MOV EAX,[0x02f0d36c]                ; 0056ea6d | g_InverseMatrix[0][2]
    MOV dword ptr [ESP + 0x4],ECX       ; 0056ea72
    IMUL EDX                            ; 0056ea76
    SHRD EAX,EDX,0x10                   ; 0056ea78
    MOV EDX,dword ptr [ESP + 0x10]      ; 0056ea7c
    MOV ECX,EAX                         ; 0056ea80
    MOV EAX,[0x02f0d378]                ; 0056ea82 | g_InverseMatrix[1][2]
    IMUL EDX                            ; 0056ea87
    SHRD EAX,EDX,0x10                   ; 0056ea89
    MOV EDX,ESI                         ; 0056ea8d
    ADD ECX,EAX                         ; 0056ea8f
    MOV EAX,[0x02f0d384]                ; 0056ea91 | g_InverseMatrix[2][2]
    MOV EDI,EBX                         ; 0056ea96
    IMUL EDX                            ; 0056ea98
    SHRD EAX,EDX,0x10                   ; 0056ea9a
    ADD ECX,EAX                         ; 0056ea9e
    MOV ESI,ESP                         ; 0056eaa0
    MOV dword ptr [ESP + 0x8],ECX       ; 0056eaa2
    MOVSD ES:EDI,ESI                    ; 0056eaa6
    MOVSD ES:EDI,ESI                    ; 0056eaa7
    MOVSD ES:EDI,ESI                    ; 0056eaa8
    MOV EAX,EBX                         ; 0056eaa9
    ADD ESP,0x18                        ; 0056eaab
    POP EDI                             ; 0056eaae
    POP EBX                             ; 0056eaaf
    RET                                 ; 0056eab0

