; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_00453950(CDemonCamera *this_ptr,int alpha_index)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   alpha_index
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
; Called Functions:
;   engine_matrix.c_getCameraOrigin_FUN_0050e2c0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00453950
        ;   Label: core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_00453950
    PUSH EDI                            ; 00453951
    SUB ESP,0xc                         ; 00453952
    MOV ESI,ESP                         ; 00453955
    CALL engine_matrix.c_getCameraOrigin_FUN_0050e2c0 ; 00453957
        ;   XREF to: 0050e2c0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_getCameraOrigin_FUN_0050e2c0(CVector3i * output)
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0045395c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00453960
    SUB EAX,EDX                         ; 00453967
    MOV EDX,dword ptr [ESP + 0x18]      ; 00453969
    SHL EAX,0x2                         ; 0045396d
    ADD EAX,EDX                         ; 00453970
    LEA EDI,[EAX + 0x11ec]              ; 00453972
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00453978
    SHL EAX,0x2                         ; 0045397c
    MOV ESI,ESP                         ; 0045397f
    ADD EAX,EDX                         ; 00453981
    JMP 0x0060c7ab                      ; 00453983
        ;   XREF to: 0060c7ab (UNCONDITIONAL_JUMP)  ; LAB_0060c7ab
    MOV dword ptr [EAX + 0x124c],EDX    ; 0045398c
        ;   Label: LAB_0045398c
    MOV EDX,dword ptr [0x02d052ec]      ; 00453992 | g_TransformMatrix[0][1]
    MOV dword ptr [EAX + 0x126c],EDX    ; 00453998
    MOV EDX,dword ptr [0x02d052f0]      ; 0045399e | g_TransformMatrix[0][2]
    MOV dword ptr [EAX + 0x128c],EDX    ; 004539a4
    MOV EDX,dword ptr [0x02d052f4]      ; 004539aa | g_TransformMatrix[1][0]
    MOV dword ptr [EAX + 0x12ac],EDX    ; 004539b0
    MOV EDX,dword ptr [0x02d052f8]      ; 004539b6 | g_TransformMatrix[1][1]
    MOV dword ptr [EAX + 0x12cc],EDX    ; 004539bc
    MOV EDX,dword ptr [0x02d052fc]      ; 004539c2 | g_TransformMatrix[1][2]
    MOV dword ptr [EAX + 0x12ec],EDX    ; 004539c8
    MOV EDX,dword ptr [0x02d05300]      ; 004539ce | g_TransformMatrix[2][0]
    MOV dword ptr [EAX + 0x130c],EDX    ; 004539d4
    MOV EDX,dword ptr [0x02d05304]      ; 004539da | g_TransformMatrix[2][1]
    MOV dword ptr [EAX + 0x132c],EDX    ; 004539e0
    MOV EDX,dword ptr [0x02d05308]      ; 004539e6 | g_TransformMatrix[2][2]
    MOV dword ptr [EAX + 0x134c],EDX    ; 004539ec
    MOV EDX,dword ptr [0x02f0d364]      ; 004539f2 | g_InverseMatrix
    MOV dword ptr [EAX + 0x136c],EDX    ; 004539f8
    MOV EDX,dword ptr [0x02f0d368]      ; 004539fe | g_InverseMatrix[0][1]
    MOV dword ptr [EAX + 0x138c],EDX    ; 00453a04
    MOV EDX,dword ptr [0x02f0d36c]      ; 00453a0a | g_InverseMatrix[0][2]
    MOV dword ptr [EAX + 0x13ac],EDX    ; 00453a10
    MOV EDX,dword ptr [0x02f0d370]      ; 00453a16 | g_InverseMatrix[1][0]
    MOV dword ptr [EAX + 0x13cc],EDX    ; 00453a1c
    MOV EDX,dword ptr [0x02f0d374]      ; 00453a22 | g_InverseMatrix[1][1]
    MOV dword ptr [EAX + 0x13ec],EDX    ; 00453a28
    MOV EDX,dword ptr [0x02f0d378]      ; 00453a2e | g_InverseMatrix[1][2]
    MOV dword ptr [EAX + 0x140c],EDX    ; 00453a34
    MOV EDX,dword ptr [0x02f0d37c]      ; 00453a3a | g_InverseMatrix[2][0]
    MOV dword ptr [EAX + 0x142c],EDX    ; 00453a40
    MOV EDX,dword ptr [0x02f0d380]      ; 00453a46 | g_InverseMatrix[2][1]
    MOV dword ptr [EAX + 0x144c],EDX    ; 00453a4c
    MOV EDX,dword ptr [0x02f0d384]      ; 00453a52 | g_InverseMatrix[2][2]
    MOV dword ptr [EAX + 0x146c],EDX    ; 00453a58
    ADD ESP,0xc                         ; 00453a5e
    POP EDI                             ; 00453a61
    POP ESI                             ; 00453a62
    RET                                 ; 00453a63
    MOV ECX,dword ptr [ESI]             ; 0060c7ab
        ;   Label: LAB_0060c7ab
    MOV dword ptr [EDI],ECX             ; 0060c7ad
    MOV ECX,dword ptr [ESI + 0x4]       ; 0060c7af
    MOV dword ptr [EDI + 0x4],ECX       ; 0060c7b2
    MOV ECX,dword ptr [ESI + 0x8]       ; 0060c7b5
    MOV dword ptr [EDI + 0x8],ECX       ; 0060c7b8
    ADD ESI,0xc                         ; 0060c7bb
    ADD EDI,0xc                         ; 0060c7be
    MOV EDX,dword ptr [0x02d052e8]      ; 0060c7c1 | g_TransformMatrix
    JMP 0x0045398c                      ; 0060c7c7
        ;   XREF to: 0045398c (UNCONDITIONAL_JUMP)  ; LAB_0045398c

