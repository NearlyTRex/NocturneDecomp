; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_sampleAndFilterPixel_FUN_0046ae20 (void *rgb_buffer,void *alpha_buffer,int col_coord,int row_coord,double coord_x1, double coord_y1,double coord_x2,double coord_y2,int atlas_width,int atlas_height, byte *red_out,byte *green_out,byte *blue_out,byte *alpha_out)
;
; Parameters:
; void *           Stack[0x4]:4   rgb_buffer
; void *           Stack[0x8]:4   alpha_buffer
; int              Stack[0xc]:4   col_coord
; int              Stack[0x10]:4   row_coord
; double           Stack[0x14]:8   coord_x1
; double           Stack[0x1c]:8   coord_y1
; double           Stack[0x24]:8   coord_x2
; double           Stack[0x2c]:8   coord_y2
; int              Stack[0x34]:4   atlas_width
; int              Stack[0x38]:4   atlas_height
; byte *           Stack[0x3c]:4   red_out
; byte *           Stack[0x40]:4   green_out
; byte *           Stack[0x44]:4   blue_out
; byte *           Stack[0x48]:4   alpha_out
; Local Variables:
; undefined8       Stack[-0x80]:8  local_80
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined4       Stack[-0x60]:4  local_60
; undefined8       Stack[-0x5c]:8  local_5c
; undefined8       Stack[-0x54]:8  local_54
; undefined8       Stack[-0x4c]:8  local_4c
; undefined8       Stack[-0x44]:8  local_44
; undefined8       Stack[-0x3c]:8  local_3c
; undefined8       Stack[-0x34]:8  local_34
; undefined8       Stack[-0x2c]:8  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_loadTextureData_FUN_0046b060 at 0046b5f2
;
; Referenced Globals:
;   double g_RoundingOffset_0061d296 = 0.5
;
; Called Functions:
;   crt_math.c_ceil_FUN_006001b2
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;   shape_design.c_calculateSamplingWeight_FUN_0046adc0
;   shape_design.c_samplePixelAndAccumulate_FUN_0046ad00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046ae20
        ;   Label: shape_design.c_sampleAndFilterPixel_FUN_0046ae20
    PUSH ESI                            ; 0046ae21
    PUSH EDI                            ; 0046ae22
    PUSH EBP                            ; 0046ae23
    MOV EBP,ESP                         ; 0046ae24
    SUB ESP,0x58                        ; 0046ae26
    MOV dword ptr [EBP + -0x3c],0x0     ; 0046ae2c
    MOV dword ptr [EBP + -0x38],0x0     ; 0046ae33
    MOV dword ptr [EBP + -0x34],0x0     ; 0046ae3a
    MOV dword ptr [EBP + -0x30],0x0     ; 0046ae41
    MOV dword ptr [EBP + -0x2c],0x0     ; 0046ae48
    MOV dword ptr [EBP + -0x28],0x0     ; 0046ae4f
    MOV dword ptr [EBP + -0x24],0x0     ; 0046ae56
    MOV dword ptr [EBP + -0x20],0x0     ; 0046ae5d
    MOV dword ptr [EBP + -0x1c],0x0     ; 0046ae64
    MOV dword ptr [EBP + -0x18],0x0     ; 0046ae6b
    FLD double ptr [EBP + 0x2c]         ; 0046ae72
    SUB ESP,0x8                         ; 0046ae75
    FSTP double ptr [ESP]               ; 0046ae78
    CALL crt_math.c_floor_FUN_005feb90  ; 0046ae7b
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [EBP + -0x44],EAX     ; 0046ae80
    MOV dword ptr [EBP + -0x40],EDX     ; 0046ae83
    FLD double ptr [EBP + -0x44]        ; 0046ae86
    ADD ESP,0x8                         ; 0046ae89
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046ae8c
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x14]       ; 0046ae91
    FLD double ptr [EBP + 0x3c]         ; 0046ae94
    SUB ESP,0x8                         ; 0046ae97
    FSTP double ptr [ESP]               ; 0046ae9a
    CALL crt_math.c_ceil_FUN_006001b2   ; 0046ae9d
        ;   XREF to: 006001b2 (UNCONDITIONAL_CALL)  ; double crt_math.c_ceil_FUN_006001b2(double value)
    MOV dword ptr [EBP + -0x44],EAX     ; 0046aea2
    MOV dword ptr [EBP + -0x40],EDX     ; 0046aea5
    FLD double ptr [EBP + -0x44]        ; 0046aea8
    ADD ESP,0x8                         ; 0046aeab
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046aeae
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x10]       ; 0046aeb3
    FLD double ptr [EBP + 0x24]         ; 0046aeb6
    SUB ESP,0x8                         ; 0046aeb9
    FSTP double ptr [ESP]               ; 0046aebc
    CALL crt_math.c_floor_FUN_005feb90  ; 0046aebf
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [EBP + -0x44],EAX     ; 0046aec4
    MOV dword ptr [EBP + -0x40],EDX     ; 0046aec7
    FLD double ptr [EBP + -0x44]        ; 0046aeca
    ADD ESP,0x8                         ; 0046aecd
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046aed0
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0xc]        ; 0046aed5
    FLD double ptr [EBP + 0x34]         ; 0046aed8
    SUB ESP,0x8                         ; 0046aedb
    FSTP double ptr [ESP]               ; 0046aede
    CALL crt_math.c_ceil_FUN_006001b2   ; 0046aee1
        ;   XREF to: 006001b2 (UNCONDITIONAL_CALL)  ; double crt_math.c_ceil_FUN_006001b2(double value)
    MOV dword ptr [EBP + -0x44],EAX     ; 0046aee6
    MOV dword ptr [EBP + -0x40],EDX     ; 0046aee9
    FLD double ptr [EBP + -0x44]        ; 0046aeec
    ADD ESP,0x8                         ; 0046aeef
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046aef2
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EBP + -0x8]        ; 0046aef7
    MOV EAX,dword ptr [EBP + -0x14]     ; 0046aefa
    MOV dword ptr [EBP + -0x4],EAX      ; 0046aefd
    JMP 0x0046af05                      ; 0046af00
        ;   XREF to: 0046af05 (UNCONDITIONAL_JUMP)  ; LAB_0046af05
    INC dword ptr [EBP + -0x4]          ; 0046af02
        ;   Label: LAB_0046af02
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046af05
        ;   Label: LAB_0046af05
    CMP EAX,dword ptr [EBP + -0x10]     ; 0046af08
    JGE 0x0046afd1                      ; 0046af0b
        ;   XREF to: 0046afd1 (CONDITIONAL_JUMP)  ; LAB_0046afd1
    FLD double ptr [EBP + 0x3c]         ; 0046af11
    SUB ESP,0x8                         ; 0046af14
    FSTP double ptr [ESP]               ; 0046af17
    FLD double ptr [EBP + 0x2c]         ; 0046af1a
    SUB ESP,0x8                         ; 0046af1d
    FSTP double ptr [ESP]               ; 0046af20
    FILD dword ptr [EBP + -0x4]         ; 0046af23
    SUB ESP,0x8                         ; 0046af26
    FSTP double ptr [ESP]               ; 0046af29
    CALL shape_design.c_calculateSamplingWeight_FUN_0046adc0 ; 0046af2c
        ;   XREF to: 0046adc0 (UNCONDITIONAL_CALL)  ; double shape_design.c_calculateSamplingWeight_FUN_0046adc0(double current_pos, double start_coord, double end_coord)
    MOV dword ptr [EBP + -0x44],EAX     ; 0046af31
    MOV dword ptr [EBP + -0x40],EDX     ; 0046af34
    FLD double ptr [EBP + -0x44]        ; 0046af37
    ADD ESP,0x18                        ; 0046af3a
    FSTP double ptr [EBP + -0x4c]       ; 0046af3d
    MOV EAX,dword ptr [EBP + -0xc]      ; 0046af40
    MOV dword ptr [EBP + -0x50],EAX     ; 0046af43
    JMP 0x0046af4b                      ; 0046af46
        ;   XREF to: 0046af4b (UNCONDITIONAL_JUMP)  ; LAB_0046af4b
    INC dword ptr [EBP + -0x50]         ; 0046af48
        ;   Label: LAB_0046af48
    MOV EAX,dword ptr [EBP + -0x50]     ; 0046af4b
        ;   Label: LAB_0046af4b
    CMP EAX,dword ptr [EBP + -0x8]      ; 0046af4e
    JGE 0x0046afcc                      ; 0046af51
        ;   XREF to: 0046afcc (CONDITIONAL_JUMP)  ; LAB_0046afcc
    FLD double ptr [EBP + 0x34]         ; 0046af53
    SUB ESP,0x8                         ; 0046af56
    FSTP double ptr [ESP]               ; 0046af59
    FLD double ptr [EBP + 0x24]         ; 0046af5c
    SUB ESP,0x8                         ; 0046af5f
    FSTP double ptr [ESP]               ; 0046af62
    FILD dword ptr [EBP + -0x50]        ; 0046af65
    SUB ESP,0x8                         ; 0046af68
    FSTP double ptr [ESP]               ; 0046af6b
    CALL shape_design.c_calculateSamplingWeight_FUN_0046adc0 ; 0046af6e
        ;   XREF to: 0046adc0 (UNCONDITIONAL_CALL)  ; double shape_design.c_calculateSamplingWeight_FUN_0046adc0(double current_pos, double start_coord, double end_coord)
    MOV dword ptr [EBP + -0x44],EAX     ; 0046af73
    MOV dword ptr [EBP + -0x40],EDX     ; 0046af76
    FLD double ptr [EBP + -0x44]        ; 0046af79
    ADD ESP,0x18                        ; 0046af7c
    FMUL double ptr [EBP + -0x4c]       ; 0046af7f
    FSTP double ptr [EBP + -0x58]       ; 0046af82
    LEA EAX,[EBP + -0x24]               ; 0046af85
    PUSH EAX                            ; 0046af88
    LEA EAX,[EBP + -0x2c]               ; 0046af89
    PUSH EAX                            ; 0046af8c
    LEA EAX,[EBP + -0x34]               ; 0046af8d
    PUSH EAX                            ; 0046af90
    LEA EAX,[EBP + -0x3c]               ; 0046af91
    PUSH EAX                            ; 0046af94
    FLD double ptr [EBP + -0x58]        ; 0046af95
    SUB ESP,0x8                         ; 0046af98
    FSTP double ptr [ESP]               ; 0046af9b
    MOV EAX,dword ptr [EBP + -0x4]      ; 0046af9e
    PUSH EAX                            ; 0046afa1
    MOV EAX,dword ptr [EBP + -0x50]     ; 0046afa2
    PUSH EAX                            ; 0046afa5
    MOV EAX,dword ptr [EBP + 0x20]      ; 0046afa6
    PUSH EAX                            ; 0046afa9
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0046afaa
    PUSH EAX                            ; 0046afad
    MOV EAX,dword ptr [EBP + 0x18]      ; 0046afae
    PUSH EAX                            ; 0046afb1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0046afb2
    PUSH EAX                            ; 0046afb5
    CALL shape_design.c_samplePixelAndAccumulate_FUN_0046ad00 ; 0046afb6
        ;   XREF to: 0046ad00 (UNCONDITIONAL_CALL)  ; void shape_design.c_samplePixelAndAccumulate_FUN_0046ad00(void * rgb_buffer, void * alpha_buffer, int atlas_width, int atlas_height, ...)
    ADD ESP,0x30                        ; 0046afbb
    FLD double ptr [EBP + -0x1c]        ; 0046afbe
    FADD double ptr [EBP + -0x58]       ; 0046afc1
    FSTP double ptr [EBP + -0x1c]       ; 0046afc4
    JMP 0x0046af48                      ; 0046afc7
        ;   XREF to: 0046af48 (UNCONDITIONAL_JUMP)  ; LAB_0046af48
    JMP 0x0046af02                      ; 0046afcc
        ;   XREF to: 0046af02 (UNCONDITIONAL_JUMP)  ; LAB_0046af02
        ;   Label: LAB_0046afcc
    FLDZ                                ; 0046afd1
        ;   Label: LAB_0046afd1
    FCOMP double ptr [EBP + -0x1c]      ; 0046afd3
    FNSTSW AX                           ; 0046afd6
    SAHF                                ; 0046afd8
    JNC 0x0046afff                      ; 0046afd9
        ;   XREF to: 0046afff (CONDITIONAL_JUMP)  ; LAB_0046afff
    FLD double ptr [EBP + -0x3c]        ; 0046afdb
    FDIV double ptr [EBP + -0x1c]       ; 0046afde
    FSTP double ptr [EBP + -0x3c]       ; 0046afe1
    FLD double ptr [EBP + -0x34]        ; 0046afe4
    FDIV double ptr [EBP + -0x1c]       ; 0046afe7
    FSTP double ptr [EBP + -0x34]       ; 0046afea
    FLD double ptr [EBP + -0x2c]        ; 0046afed
    FDIV double ptr [EBP + -0x1c]       ; 0046aff0
    FSTP double ptr [EBP + -0x2c]       ; 0046aff3
    FLD double ptr [EBP + -0x24]        ; 0046aff6
    FDIV double ptr [EBP + -0x1c]       ; 0046aff9
    FSTP double ptr [EBP + -0x24]       ; 0046affc
    FLD double ptr [EBP + -0x3c]        ; 0046afff
        ;   Label: LAB_0046afff
    FADD double ptr [0x0061d296]        ; 0046b002 | g_RoundingOffset_0061d296
    MOV EAX,dword ptr [EBP + 0x44]      ; 0046b008
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046b00b
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EAX]               ; 0046b010
    FLD double ptr [EBP + -0x34]        ; 0046b012
    FADD double ptr [0x0061d296]        ; 0046b015 | g_RoundingOffset_0061d296
    MOV EAX,dword ptr [EBP + 0x48]      ; 0046b01b
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046b01e
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EAX]               ; 0046b023
    FLD double ptr [EBP + -0x2c]        ; 0046b025
    FADD double ptr [0x0061d296]        ; 0046b028 | g_RoundingOffset_0061d296
    MOV EAX,dword ptr [EBP + 0x4c]      ; 0046b02e
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046b031
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EAX]               ; 0046b036
    FLD double ptr [EBP + -0x24]        ; 0046b038
    FADD double ptr [0x0061d296]        ; 0046b03b | g_RoundingOffset_0061d296
    MOV EAX,dword ptr [EBP + 0x50]      ; 0046b041
    CALL crt_math.c_round_FUN_005fe6b0  ; 0046b044
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [EAX]               ; 0046b049
    MOV ESP,EBP                         ; 0046b04b
    POP EBP                             ; 0046b04d
    POP EDI                             ; 0046b04e
    POP ESI                             ; 0046b04f
    POP EBX                             ; 0046b050
    RET                                 ; 0046b051

