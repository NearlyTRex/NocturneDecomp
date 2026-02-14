; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack_esi SVertexData * __stack_esi shape_design_c_convertWorldToScreenCoordinates_FUN_0045bd10(SScreenCoord *input_coords,SVertexData *output_vertex)
;
; Parameters:
; SScreenCoord *   Stack[0x4]:4   input_coords
; Local Variables:
; undefined        Stack[-0x4c]:1  local_4c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   double g_WindowAspectRatioMultiplier = 3
;   double g_WindowAspectRatioCorrection = 0.25
;   double g_WindowViewportCenterOffset = 0.5
;   float g_WindowWorldScaleFactor = 0.00390625
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   undefined4 g_PolygonScreenCache[19999].view_mode
;   int g_ZoomLevel
;   int g_StoredWorldYCoordinate
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045bd10
        ;   Label: shape_design.c_convertWorldToScreenCoordinates_FUN_0045bd10
    PUSH EDI                            ; 0045bd11
    PUSH EBP                            ; 0045bd12
    MOV EBP,ESP                         ; 0045bd13
    SUB ESP,0x90                        ; 0045bd15
    MOV dword ptr [EBP + -0x8],ESI      ; 0045bd1b
    FILD dword ptr [0x00679394]         ; 0045bd1e | g_WindowWidth
    FMUL double ptr [0x0061b2ee]        ; 0045bd24 | g_WindowAspectRatioMultiplier
    FILD dword ptr [0x00679398]         ; 0045bd2a | g_WindowHeight
    FDIVP                               ; 0045bd30
    FMUL double ptr [0x0061b2f6]        ; 0045bd32 | g_WindowAspectRatioCorrection
    FSTP float ptr [EBP + -0x18]        ; 0045bd38
    MOV EAX,dword ptr [EBP + 0x10]      ; 0045bd3b
    FILD dword ptr [EAX]                ; 0045bd3e
    FILD dword ptr [0x00679394]         ; 0045bd40 | g_WindowWidth
    FMUL double ptr [0x0061b2fe]        ; 0045bd46 | g_WindowViewportCenterOffset
    FSUBP                               ; 0045bd4c
    FILD dword ptr [0x00679394]         ; 0045bd4e | g_WindowWidth
    FMUL double ptr [0x0061b2fe]        ; 0045bd54 | g_WindowViewportCenterOffset
    FDIVP                               ; 0045bd5a
    FSTP float ptr [EBP + -0x14]        ; 0045bd5c
    MOV EAX,dword ptr [EBP + 0x10]      ; 0045bd5f
    FILD dword ptr [EAX + 0x4]          ; 0045bd62
    FILD dword ptr [0x00679398]         ; 0045bd65 | g_WindowHeight
    FMUL double ptr [0x0061b2fe]        ; 0045bd6b | g_WindowViewportCenterOffset
    FSUBP                               ; 0045bd71
    FCHS                                ; 0045bd73
    FILD dword ptr [0x00679398]         ; 0045bd75 | g_WindowHeight
    FMUL double ptr [0x0061b2fe]        ; 0045bd7b | g_WindowViewportCenterOffset
    FDIVP                               ; 0045bd81
    FSTP float ptr [EBP + -0x10]        ; 0045bd83
    FILD dword ptr [0x01626344]         ; 0045bd86 | g_ZoomLevel
    FMUL float ptr [EBP + -0x14]        ; 0045bd8c
    FMUL float ptr [0x0061b306]         ; 0045bd8f | g_WindowWorldScaleFactor
    FMUL float ptr [EBP + -0x18]        ; 0045bd95
    FSTP float ptr [EBP + -0x14]        ; 0045bd98
    FILD dword ptr [0x01626344]         ; 0045bd9b | g_ZoomLevel
    FMUL float ptr [EBP + -0x10]        ; 0045bda1
    FMUL float ptr [0x0061b306]         ; 0045bda4 | g_WindowWorldScaleFactor
    FSTP float ptr [EBP + -0x10]        ; 0045bdaa
    MOV EAX,[0x01626360]                ; 0045bdad | g_StoredWorldYCoordinate
    MOV dword ptr [EBP + -0xc],EAX      ; 0045bdb2
    MOV EAX,[0x01626340]                ; 0045bdb5 | g_PolygonScreenCache[19999].view_mode
    MOV dword ptr [EBP + -0x4],EAX      ; 0045bdba
    JMP 0x0045be03                      ; 0045bdbd
        ;   XREF to: 0045be03 (UNCONDITIONAL_JUMP)  ; LAB_0045be03
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045bdbf
        ;   Label: LAB_0045bdbf
    MOV dword ptr [EBP + -0x2c],EAX     ; 0045bdc2
    MOV EAX,[0x01626360]                ; 0045bdc5 | g_StoredWorldYCoordinate
    MOV dword ptr [EBP + -0x28],EAX     ; 0045bdca
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045bdcd
    MOV dword ptr [EBP + -0x24],EAX     ; 0045bdd0
    JMP 0x0045be1f                      ; 0045bdd3
        ;   XREF to: 0045be1f (UNCONDITIONAL_JUMP)  ; LAB_0045be1f
    MOV EAX,[0x01626360]                ; 0045bdd5 | g_StoredWorldYCoordinate
        ;   Label: LAB_0045bdd5
    MOV dword ptr [EBP + -0x2c],EAX     ; 0045bdda
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045bddd
    MOV dword ptr [EBP + -0x28],EAX     ; 0045bde0
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045bde3
    MOV dword ptr [EBP + -0x24],EAX     ; 0045bde6
    JMP 0x0045be1f                      ; 0045bde9
        ;   XREF to: 0045be1f (UNCONDITIONAL_JUMP)  ; LAB_0045be1f
    MOV EAX,dword ptr [EBP + -0x14]     ; 0045bdeb
        ;   Label: LAB_0045bdeb
    MOV dword ptr [EBP + -0x2c],EAX     ; 0045bdee
    MOV EAX,dword ptr [EBP + -0x10]     ; 0045bdf1
    MOV dword ptr [EBP + -0x28],EAX     ; 0045bdf4
    MOV EAX,[0x01626360]                ; 0045bdf7 | g_StoredWorldYCoordinate
    MOV dword ptr [EBP + -0x24],EAX     ; 0045bdfc
    JMP 0x0045be1f                      ; 0045bdff
        ;   XREF to: 0045be1f (UNCONDITIONAL_JUMP)  ; LAB_0045be1f
    JMP 0x0045be1f                      ; 0045be01
        ;   XREF to: 0045be1f (UNCONDITIONAL_JUMP)  ; LAB_0045be1f
        ;   Label: LAB_0045be01
    CMP dword ptr [EBP + -0x4],0x1      ; 0045be03
        ;   Label: LAB_0045be03
    JC 0x0045be17                       ; 0045be07
        ;   XREF to: 0045be17 (CONDITIONAL_JUMP)  ; LAB_0045be17
    CMP dword ptr [EBP + -0x4],0x1      ; 0045be09
    JBE 0x0045bdd5                      ; 0045be0d
        ;   XREF to: 0045bdd5 (CONDITIONAL_JUMP)  ; LAB_0045bdd5
    CMP dword ptr [EBP + -0x4],0x2      ; 0045be0f
    JZ 0x0045bdeb                       ; 0045be13
        ;   XREF to: 0045bdeb (CONDITIONAL_JUMP)  ; LAB_0045bdeb
    JMP 0x0045be01                      ; 0045be15
        ;   XREF to: 0045be01 (UNCONDITIONAL_JUMP)  ; LAB_0045be01
    CMP dword ptr [EBP + -0x4],0x0      ; 0045be17
        ;   Label: LAB_0045be17
    JZ 0x0045bdbf                       ; 0045be1b
        ;   XREF to: 0045bdbf (CONDITIONAL_JUMP)  ; LAB_0045bdbf
    JMP 0x0045be01                      ; 0045be1d
        ;   XREF to: 0045be01 (UNCONDITIONAL_JUMP)  ; LAB_0045be01
    LEA EDI,[EBP + -0x40]               ; 0045be1f
        ;   Label: LAB_0045be1f
    LEA ESI,[EBP + -0x2c]               ; 0045be22
    MOVSD ES:EDI,ESI                    ; 0045be25
    MOVSD ES:EDI,ESI                    ; 0045be26
    MOVSD ES:EDI,ESI                    ; 0045be27
    MOVSD ES:EDI,ESI                    ; 0045be28
    MOVSD ES:EDI,ESI                    ; 0045be29
    MOV EDI,dword ptr [EBP + -0x8]      ; 0045be2a
    LEA ESI,[EBP + -0x40]               ; 0045be2d
    MOVSD ES:EDI,ESI                    ; 0045be30
    MOVSD ES:EDI,ESI                    ; 0045be31
    MOVSD ES:EDI,ESI                    ; 0045be32
    MOVSD ES:EDI,ESI                    ; 0045be33
    MOVSD ES:EDI,ESI                    ; 0045be34
    MOV EAX,dword ptr [EBP + -0x8]      ; 0045be35
    MOV ESP,EBP                         ; 0045be38
    POP EBP                             ; 0045be3a
    POP EDI                             ; 0045be3b
    POP EBX                             ; 0045be3c
    RET                                 ; 0045be3d

