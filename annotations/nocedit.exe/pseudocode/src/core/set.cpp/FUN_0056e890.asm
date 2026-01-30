; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_set_cpp_FUN_0056e890(void)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_set.cpp_CDemonSet_lightVerticies_FUN_0056eac0 at 0056ee64
;
; Referenced Globals:
;   int g_CameraOriginX
;   int g_CameraOriginY
;   int g_CameraOriginZ
;   CMatrix3x3i g_InverseMatrix
;   undefined4 g_InverseMatrix[0][1]
;   undefined4 g_InverseMatrix[0][2]
;   undefined4 g_InverseMatrix[1][0]
;   undefined4 g_InverseMatrix[1][1]
;   undefined4 g_InverseMatrix[1][2]
;   undefined4 g_InverseMatrix[2][0]
;   undefined4 g_InverseMatrix[2][1]
;   undefined4 g_InverseMatrix[2][2]
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e890
        ;   Label: core_set.cpp_FUN_0056e890
    PUSH EDI                            ; 0056e891
    SUB ESP,0xc                         ; 0056e892
    MOV ECX,dword ptr [ESP + 0x18]      ; 0056e895
    MOV EBX,ESI                         ; 0056e899
    MOV EAX,[0x02f0d364]                ; 0056e89b | g_InverseMatrix
    MOV EDX,dword ptr [ECX]             ; 0056e8a0
    IMUL EDX                            ; 0056e8a2
    SHRD EAX,EDX,0x10                   ; 0056e8a4
    MOV ESI,EAX                         ; 0056e8a8
    MOV EDX,dword ptr [ECX + 0x4]       ; 0056e8aa
    MOV EAX,[0x02f0d370]                ; 0056e8ad | g_InverseMatrix[1][0]
    IMUL EDX                            ; 0056e8b2
    SHRD EAX,EDX,0x10                   ; 0056e8b4
    MOV EDX,dword ptr [ECX + 0x8]       ; 0056e8b8
    ADD ESI,EAX                         ; 0056e8bb
    MOV EAX,[0x02f0d37c]                ; 0056e8bd | g_InverseMatrix[2][0]
    IMUL EDX                            ; 0056e8c2
    SHRD EAX,EDX,0x10                   ; 0056e8c4
    MOV EDX,dword ptr [0x02d052c4]      ; 0056e8c8 | g_CameraOriginX
    ADD EAX,ESI                         ; 0056e8ce
    ADD EDX,EAX                         ; 0056e8d0
    MOV EAX,[0x02f0d368]                ; 0056e8d2 | g_InverseMatrix[0][1]
    MOV dword ptr [ESP],EDX             ; 0056e8d7
    MOV EDX,dword ptr [ECX]             ; 0056e8da
    IMUL EDX                            ; 0056e8dc
    SHRD EAX,EDX,0x10                   ; 0056e8de
    MOV ESI,EAX                         ; 0056e8e2
    MOV EDX,dword ptr [ECX + 0x4]       ; 0056e8e4
    MOV EAX,[0x02f0d374]                ; 0056e8e7 | g_InverseMatrix[1][1]
    IMUL EDX                            ; 0056e8ec
    SHRD EAX,EDX,0x10                   ; 0056e8ee
    MOV EDX,dword ptr [ECX + 0x8]       ; 0056e8f2
    ADD ESI,EAX                         ; 0056e8f5
    MOV EAX,[0x02f0d380]                ; 0056e8f7 | g_InverseMatrix[2][1]
    IMUL EDX                            ; 0056e8fc
    SHRD EAX,EDX,0x10                   ; 0056e8fe
    MOV EDX,dword ptr [0x02d052c8]      ; 0056e902 | g_CameraOriginY
    ADD EAX,ESI                         ; 0056e908
    ADD EDX,EAX                         ; 0056e90a
    MOV EAX,[0x02f0d36c]                ; 0056e90c | g_InverseMatrix[0][2]
    MOV dword ptr [ESP + 0x4],EDX       ; 0056e911
    MOV EDX,dword ptr [ECX]             ; 0056e915
    IMUL EDX                            ; 0056e917
    SHRD EAX,EDX,0x10                   ; 0056e919
    MOV ESI,EAX                         ; 0056e91d
    MOV EDX,dword ptr [ECX + 0x4]       ; 0056e91f
    MOV EAX,[0x02f0d378]                ; 0056e922 | g_InverseMatrix[1][2]
    IMUL EDX                            ; 0056e927
    SHRD EAX,EDX,0x10                   ; 0056e929
    MOV EDX,dword ptr [ECX + 0x8]       ; 0056e92d
    ADD ESI,EAX                         ; 0056e930
    MOV EAX,[0x02f0d384]                ; 0056e932 | g_InverseMatrix[2][2]
    IMUL EDX                            ; 0056e937
    SHRD EAX,EDX,0x10                   ; 0056e939
    MOV EDX,dword ptr [0x02d052cc]      ; 0056e93d | g_CameraOriginZ
    ADD EAX,ESI                         ; 0056e943
    MOV EDI,EBX                         ; 0056e945
    ADD EDX,EAX                         ; 0056e947
    MOV ESI,ESP                         ; 0056e949
    MOV dword ptr [ESP + 0x8],EDX       ; 0056e94b
    MOVSD ES:EDI,ESI                    ; 0056e94f
    MOVSD ES:EDI,ESI                    ; 0056e950
    MOVSD ES:EDI,ESI                    ; 0056e951
    MOV EAX,EBX                         ; 0056e952
    ADD ESP,0xc                         ; 0056e954
    POP EDI                             ; 0056e957
    POP EBX                             ; 0056e958
    RET                                 ; 0056e959

