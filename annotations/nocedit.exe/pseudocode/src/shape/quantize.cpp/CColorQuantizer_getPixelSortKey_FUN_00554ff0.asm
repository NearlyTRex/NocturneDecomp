; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0(CColorQuantizer * this_ptr, SColorBox * box_ptr, uchar * pixel_ptr)
;
; Parameters:
; CColorQuantizer * Stack[0x4]:4   this_ptr
; SColorBox *      Stack[0x8]:4   box_ptr
; uchar *          Stack[0xc]:4   pixel_ptr
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   shape_quantize.cpp_CColorQuantizer_splitBox_FUN_00554e70 at 00554f04
;
; Referenced Globals:
;   double DOUBLE_00640c2b = 0.300000000000000
;   double DOUBLE_00640c33 = 0.590000000000000
;   double DOUBLE_00640c3b = 0.110000000000000
;   double DOUBLE_00640c43 = 0.700000000000000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00554ff0
        ;   Label: shape_quantize.cpp_CColorQuantizer_getPixelSortKey_FUN_00554ff0
    SUB ESP,0x1c                        ; 00554ff1
    MOV EDX,dword ptr [ESP + 0x28]      ; 00554ff4
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00554ff8
    XOR ECX,ECX                         ; 00554ffc
    MOVSX EBX,word ptr [EDX]            ; 00554ffe
    MOV CL,byte ptr [EAX]               ; 00555001
    SUB ECX,EBX                         ; 00555003
    MOV dword ptr [ESP + 0x14],ECX      ; 00555005
    XOR EBX,EBX                         ; 00555009
    MOV ECX,dword ptr [EDX]             ; 0055500b
    MOV BL,byte ptr [EAX + 0x1]         ; 0055500d
    SAR ECX,0x10                        ; 00555010
    SUB EBX,ECX                         ; 00555013
    MOV dword ptr [ESP + 0x18],EBX      ; 00555015
    MOV ECX,dword ptr [EDX + 0x2]       ; 00555019
    XOR EBX,EBX                         ; 0055501c
    SAR ECX,0x10                        ; 0055501e
    MOV BL,byte ptr [EAX + 0x2]         ; 00555021
    FILD dword ptr [ESP + 0x14]         ; 00555024
    SUB EBX,ECX                         ; 00555028
    FILD dword ptr [ESP + 0x18]         ; 0055502a
    MOV dword ptr [ESP + 0x18],EBX      ; 0055502e
    MOV AL,byte ptr [EAX + 0x3]         ; 00555032
    FILD dword ptr [ESP + 0x18]         ; 00555035
    FLD ST2                             ; 00555039
    FMULP ST3                           ; 0055503b
    FXCH ST2                            ; 0055503d
    FMUL double ptr [0x00640c2b]        ; 0055503f | DOUBLE_00640c2b
    FLD ST1                             ; 00555045
    FMULP ST2                           ; 00555047
    FXCH                                ; 00555049
    FMUL double ptr [0x00640c33]        ; 0055504b | DOUBLE_00640c33
    AND EAX,0xff                        ; 00555051
    MOV EDX,dword ptr [EDX + 0x4]       ; 00555056
    FADDP                               ; 00555059
    SAR EDX,0x10                        ; 0055505b
    FLD ST1                             ; 0055505e
    FMULP ST2                           ; 00555060
    SUB EAX,EDX                         ; 00555062
    FXCH                                ; 00555064
    FMUL double ptr [0x00640c3b]        ; 00555066 | DOUBLE_00640c3b
    MOV dword ptr [ESP + 0x18],EAX      ; 0055506c
    FADDP                               ; 00555070
    FILD dword ptr [ESP + 0x18]         ; 00555072
    FMUL ST0                            ; 00555076
    FMUL double ptr [0x00640c43]        ; 00555078 | DOUBLE_00640c43
    FADDP                               ; 0055507e
    FSTP float ptr [ESP + 0x4]          ; 00555080
    MOV EAX,dword ptr [ESP + 0x4]       ; 00555084
    ADD ESP,0x1c                        ; 00555088
    POP EBX                             ; 0055508b
    RET                                 ; 0055508c

