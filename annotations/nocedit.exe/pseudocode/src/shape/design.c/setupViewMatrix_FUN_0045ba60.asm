; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void shape_design.c_setupViewMatrix_FUN_0045ba60(void)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showPointEditor_FUN_0045c6c0 at 0045c6f4
;
; Referenced Globals:
;   undefined4 g_PolygonScreenCache[19999].view_mode
;   int g_ZoomLevel
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;   undefined4 g_TransformMatrix[0][2]
;   undefined4 g_TransformMatrix[1][2]
;   undefined4 g_TransformMatrix[2][2]
;
; Called Functions:
;   engine_matrix.c_buildRotationMatrix_FUN_0050c920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045ba60
        ;   Label: shape_design.c_setupViewMatrix_FUN_0045ba60
    PUSH ESI                            ; 0045ba61
    PUSH EDI                            ; 0045ba62
    PUSH EBP                            ; 0045ba63
    MOV EBP,ESP                         ; 0045ba64
    SUB ESP,0x10                        ; 0045ba66
    MOV EAX,[0x01626340]                ; 0045ba6c | g_PolygonScreenCache[19999].view_mode
    MOV dword ptr [EBP + -0x4],EAX      ; 0045ba71
    JMP 0x0045bb28                      ; 0045ba74
        ;   XREF to: 0045bb28 (UNCONDITIONAL_JUMP)  ; LAB_0045bb28
    MOV dword ptr [EBP + -0x10],0x4000  ; 0045ba79
        ;   Label: LAB_0045ba79
    MOV dword ptr [EBP + -0xc],0x0      ; 0045ba80
    MOV dword ptr [EBP + -0x8],0x0      ; 0045ba87
    MOV dword ptr [0x02d052b8],0x0      ; 0045ba8e | g_RelativeX
    MOV EAX,[0x01626344]                ; 0045ba98 | g_ZoomLevel
    SHL EAX,0x4                         ; 0045ba9d
    MOV [0x02d052bc],EAX                ; 0045baa0 | g_RelativeY
    MOV dword ptr [0x02d052c0],0x0      ; 0045baa5 | g_RelativeZ
    JMP 0x0045bb48                      ; 0045baaf
        ;   XREF to: 0045bb48 (UNCONDITIONAL_JUMP)  ; LAB_0045bb48
    MOV dword ptr [EBP + -0x10],0x0     ; 0045bab4
        ;   Label: LAB_0045bab4
    MOV dword ptr [EBP + -0xc],0x0      ; 0045babb
    MOV dword ptr [EBP + -0x8],0xc000   ; 0045bac2
    MOV EAX,[0x01626344]                ; 0045bac9 | g_ZoomLevel
    SHL EAX,0x4                         ; 0045bace
    MOV [0x02d052b8],EAX                ; 0045bad1 | g_RelativeX
    MOV dword ptr [0x02d052bc],0x0      ; 0045bad6 | g_RelativeY
    MOV dword ptr [0x02d052c0],0x0      ; 0045bae0 | g_RelativeZ
    JMP 0x0045bb48                      ; 0045baea
        ;   XREF to: 0045bb48 (UNCONDITIONAL_JUMP)  ; LAB_0045bb48
    MOV dword ptr [EBP + -0x10],0x0     ; 0045baec
        ;   Label: LAB_0045baec
    MOV dword ptr [EBP + -0xc],0x0      ; 0045baf3
    MOV dword ptr [EBP + -0x8],0x0      ; 0045bafa
    MOV dword ptr [0x02d052b8],0x0      ; 0045bb01 | g_RelativeX
    MOV dword ptr [0x02d052bc],0x0      ; 0045bb0b | g_RelativeY
    MOV EAX,[0x01626344]                ; 0045bb15 | g_ZoomLevel
    NEG EAX                             ; 0045bb1a
    SHL EAX,0x4                         ; 0045bb1c
    MOV [0x02d052c0],EAX                ; 0045bb1f | g_RelativeZ
    JMP 0x0045bb48                      ; 0045bb24
        ;   XREF to: 0045bb48 (UNCONDITIONAL_JUMP)  ; LAB_0045bb48
    JMP 0x0045bb48                      ; 0045bb26
        ;   XREF to: 0045bb48 (UNCONDITIONAL_JUMP)  ; LAB_0045bb48
        ;   Label: LAB_0045bb26
    CMP dword ptr [EBP + -0x4],0x1      ; 0045bb28
        ;   Label: LAB_0045bb28
    JC 0x0045bb3c                       ; 0045bb2c
        ;   XREF to: 0045bb3c (CONDITIONAL_JUMP)  ; LAB_0045bb3c
    CMP dword ptr [EBP + -0x4],0x1      ; 0045bb2e
    JBE 0x0045bab4                      ; 0045bb32
        ;   XREF to: 0045bab4 (CONDITIONAL_JUMP)  ; LAB_0045bab4
    CMP dword ptr [EBP + -0x4],0x2      ; 0045bb34
    JZ 0x0045baec                       ; 0045bb38
        ;   XREF to: 0045baec (CONDITIONAL_JUMP)  ; LAB_0045baec
    JMP 0x0045bb26                      ; 0045bb3a
        ;   XREF to: 0045bb26 (UNCONDITIONAL_JUMP)  ; LAB_0045bb26
    CMP dword ptr [EBP + -0x4],0x0      ; 0045bb3c
        ;   Label: LAB_0045bb3c
    JZ 0x0045ba79                       ; 0045bb40
        ;   XREF to: 0045ba79 (CONDITIONAL_JUMP)  ; LAB_0045ba79
    JMP 0x0045bb26                      ; 0045bb46
        ;   XREF to: 0045bb26 (UNCONDITIONAL_JUMP)  ; LAB_0045bb26
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045bb48
        ;   Label: LAB_0045bb48
    PUSH EAX                            ; 0045bb4b
    MOV EAX,dword ptr [EBP + -0xc]      ; 0045bb4c
    PUSH EAX                            ; 0045bb4f
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045bb50
    PUSH EAX                            ; 0045bb53
    CALL engine_matrix.c_buildRotationMatrix_FUN_0050c920 ; 0045bb54
        ;   XREF to: 0050c920 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_buildRotationMatrix_FUN_0050c920(ushort pitch, ushort yaw, ushort roll)
    ADD ESP,0xc                         ; 0045bb59
    MOV EAX,[0x02d052f0]                ; 0045bb5c | g_TransformMatrix[0][2]
    MOV EDX,dword ptr [0x02d052f0]      ; 0045bb61 | g_TransformMatrix[0][2]
    SAR EDX,0x1f                        ; 0045bb67
    SHL EDX,0x4                         ; 0045bb6a
    SBB EAX,EDX                         ; 0045bb6d
    SAR EAX,0x4                         ; 0045bb6f
    MOV [0x02d052f0],EAX                ; 0045bb72 | g_TransformMatrix[0][2]
    MOV EAX,[0x02d052fc]                ; 0045bb77 | g_TransformMatrix[1][2]
    MOV EDX,dword ptr [0x02d052fc]      ; 0045bb7c | g_TransformMatrix[1][2]
    SAR EDX,0x1f                        ; 0045bb82
    SHL EDX,0x4                         ; 0045bb85
    SBB EAX,EDX                         ; 0045bb88
    SAR EAX,0x4                         ; 0045bb8a
    MOV [0x02d052fc],EAX                ; 0045bb8d | g_TransformMatrix[1][2]
    MOV EAX,[0x02d05308]                ; 0045bb92 | g_TransformMatrix[2][2]
    MOV EDX,dword ptr [0x02d05308]      ; 0045bb97 | g_TransformMatrix[2][2]
    SAR EDX,0x1f                        ; 0045bb9d
    SHL EDX,0x4                         ; 0045bba0
    SBB EAX,EDX                         ; 0045bba3
    SAR EAX,0x4                         ; 0045bba5
    MOV [0x02d05308],EAX                ; 0045bba8 | g_TransformMatrix[2][2]
    MOV ESP,EBP                         ; 0045bbad
    POP EBP                             ; 0045bbaf
    POP EDI                             ; 0045bbb0
    POP ESI                             ; 0045bbb1
    POP EBX                             ; 0045bbb2
    RET                                 ; 0045bbb3

