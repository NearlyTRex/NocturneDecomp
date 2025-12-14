; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_matrix.c_transformWorldToView_FUN_0050cc40(int * input_coords, int * output_coords)
;
; Parameters:
; int *            Stack[0x4]:4   input_coords
; int *            Stack[0x8]:4   output_coords
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   engine_matrix.c_projectToScreen_FUN_0050e5b0 at 0050e5d6
;
; Referenced Globals:
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;   CMatrix3x3i g_TransformMatrix
;   undefined4 g_TransformMatrix[0][1]
;   undefined4 g_TransformMatrix[0][2]
;   undefined4 g_TransformMatrix[1][0]
;   undefined4 g_TransformMatrix[1][1]
;   undefined4 g_TransformMatrix[1][2]
;   undefined4 g_TransformMatrix[2][0]
;   undefined4 g_TransformMatrix[2][1]
;   undefined4 g_TransformMatrix[2][2]
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050cc40
        ;   Label: engine_matrix.c_transformWorldToView_FUN_0050cc40
    PUSH EDI                            ; 0050cc41
    PUSH EBP                            ; 0050cc42
    SUB ESP,0xc                         ; 0050cc43
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0050cc46
    MOV EBP,ESI                         ; 0050cc4a
    MOV EDX,dword ptr [0x02d052b8]      ; 0050cc4c | g_RelativeX
    MOV EDI,dword ptr [0x02d052bc]      ; 0050cc52 | g_RelativeY
    MOV EAX,[0x02d052c0]                ; 0050cc58 | g_RelativeZ
    MOV ESI,dword ptr [EBX]             ; 0050cc5d
    MOV ECX,dword ptr [EBX + 0x4]       ; 0050cc5f
    SUB ESI,EDX                         ; 0050cc62
    MOV EBX,dword ptr [EBX + 0x8]       ; 0050cc64
    MOV EDX,ESI                         ; 0050cc67
    SUB EBX,EAX                         ; 0050cc69
    MOV EAX,[0x02d052e8]                ; 0050cc6b | g_TransformMatrix
    SUB ECX,EDI                         ; 0050cc70
    IMUL EDX                            ; 0050cc72
    SHRD EAX,EDX,0x10                   ; 0050cc74
    MOV EDI,EAX                         ; 0050cc78
    MOV EDX,ECX                         ; 0050cc7a
    MOV EAX,[0x02d052f4]                ; 0050cc7c | g_TransformMatrix[1][0]
    IMUL EDX                            ; 0050cc81
    SHRD EAX,EDX,0x10                   ; 0050cc83
    MOV EDX,EBX                         ; 0050cc87
    ADD EDI,EAX                         ; 0050cc89
    MOV EAX,[0x02d05300]                ; 0050cc8b | g_TransformMatrix[2][0]
    IMUL EDX                            ; 0050cc90
    SHRD EAX,EDX,0x10                   ; 0050cc92
    MOV EDX,ESI                         ; 0050cc96
    ADD EDI,EAX                         ; 0050cc98
    MOV EAX,[0x02d052ec]                ; 0050cc9a | g_TransformMatrix[0][1]
    MOV dword ptr [ESP],EDI             ; 0050cc9f
    IMUL EDX                            ; 0050cca2
    SHRD EAX,EDX,0x10                   ; 0050cca4
    MOV EDI,EAX                         ; 0050cca8
    MOV EDX,ECX                         ; 0050ccaa
    MOV EAX,[0x02d052f8]                ; 0050ccac | g_TransformMatrix[1][1]
    IMUL EDX                            ; 0050ccb1
    SHRD EAX,EDX,0x10                   ; 0050ccb3
    MOV EDX,EBX                         ; 0050ccb7
    ADD EDI,EAX                         ; 0050ccb9
    MOV EAX,[0x02d05304]                ; 0050ccbb | g_TransformMatrix[2][1]
    IMUL EDX                            ; 0050ccc0
    SHRD EAX,EDX,0x10                   ; 0050ccc2
    MOV EDX,ESI                         ; 0050ccc6
    ADD EDI,EAX                         ; 0050ccc8
    MOV EAX,[0x02d052f0]                ; 0050ccca | g_TransformMatrix[0][2]
    IMUL EDX                            ; 0050cccf
    SHRD EAX,EDX,0x10                   ; 0050ccd1
    MOV ESI,EAX                         ; 0050ccd5
    MOV EDX,ECX                         ; 0050ccd7
    MOV EAX,[0x02d052fc]                ; 0050ccd9 | g_TransformMatrix[1][2]
    IMUL EDX                            ; 0050ccde
    SHRD EAX,EDX,0x10                   ; 0050cce0
    MOV EDX,EBX                         ; 0050cce4
    ADD ESI,EAX                         ; 0050cce6
    MOV EAX,[0x02d05308]                ; 0050cce8 | g_TransformMatrix[2][2]
    MOV dword ptr [ESP + 0x4],EDI       ; 0050cced
    IMUL EDX                            ; 0050ccf1
    SHRD EAX,EDX,0x10                   ; 0050ccf3
    ADD ESI,EAX                         ; 0050ccf7
    MOV EDI,EBP                         ; 0050ccf9
    MOV dword ptr [ESP + 0x8],ESI       ; 0050ccfb
    MOV ESI,ESP                         ; 0050ccff
    MOVSD ES:EDI,ESI                    ; 0050cd01
    MOVSD ES:EDI,ESI                    ; 0050cd02
    MOVSD ES:EDI,ESI                    ; 0050cd03
    MOV EAX,EBP                         ; 0050cd04
    ADD ESP,0xc                         ; 0050cd06
    POP EBP                             ; 0050cd09
    POP EDI                             ; 0050cd0a
    POP EBX                             ; 0050cd0b
    RET                                 ; 0050cd0c

