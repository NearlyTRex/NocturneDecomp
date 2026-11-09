; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_CDemonLight_applyFilter_FUN_0045db40(CDemonLight *this_ptr,CDemonFilter *filter_ptr,int filter_index,int filter_pos_x,int filter_pos_y)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; CDemonFilter *   Stack[0x8]:4   filter_ptr
; int              Stack[0xc]:4   filter_index
; int              Stack[0x10]:4   filter_pos_x
; int              Stack[0x14]:4   filter_pos_y
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[7]:
;   core_boxactor.cpp_FUN_00420420 at 004204bb
;   core_boxactor.cpp_FUN_004208d0 at 00420cfc
;   core_dlight.cpp_CDemonLight_init_FUN_0045c2a0 at 0045c33e
;   core_dlight.cpp_CDemonLight_setVolumetricIntensity_FUN_0045fab0 at 0045faf6
;   core_setutil.cpp_C3DSLight_advanceFilter_FUN_00542d20 at 00542d78
;   core_setutil.cpp_C3DSLight_process_FUN_00542b60 at 00542c61
;   core_setutil.cpp_C3DSLight_setFilterFrame_FUN_00542db0 at 00542dee
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045db40
        ;   Label: core_dlight.cpp_CDemonLight_applyFilter_FUN_0045db40
    PUSH ESI                            ; 0045db41
    PUSH EDI                            ; 0045db42
    PUSH EBP                            ; 0045db43
    SUB ESP,0x30                        ; 0045db44
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0045db47
    MOV EDX,dword ptr [ESP + 0x50]      ; 0045db4b
    MOV ECX,dword ptr [ESP + 0x54]      ; 0045db4f
    MOV EAX,dword ptr [ESP + 0x48]      ; 0045db53
    MOV ESI,dword ptr [ESP + 0x44]      ; 0045db57
    MOV EAX,dword ptr [EAX + 0x48]      ; 0045db5b
    MOV dword ptr [ESI + 0x1c54],EAX    ; 0045db5e
    MOV EAX,dword ptr [ESP + 0x48]      ; 0045db64
    MOV EAX,dword ptr [EAX]             ; 0045db68
    MOV dword ptr [ESI + 0x1c58],EAX    ; 0045db6a
    MOV EAX,dword ptr [ESP + 0x48]      ; 0045db70
    MOV EAX,dword ptr [EAX + 0x4]       ; 0045db74
    MOV dword ptr [ESI + 0x1c5c],EAX    ; 0045db77
    MOV EAX,dword ptr [ESI + 0x1c58]    ; 0045db7d
    MOV dword ptr [ESI + 0x1c60],0x0    ; 0045db83
    CMP EAX,0x1                         ; 0045db8d
    JLE 0x0045dbb0                      ; 0045db90
        ;   XREF to: 0045dbb0 (CONDITIONAL_JUMP)  ; LAB_0045dbb0
    MOV ESI,dword ptr [ESP + 0x44]      ; 0045db92
    MOV EDI,dword ptr [ESI + 0x1c60]    ; 0045db96
        ;   Label: LAB_0045db96
    INC EDI                             ; 0045db9c
    SAR EAX,0x1                         ; 0045db9d
    MOV dword ptr [ESI + 0x1c60],EDI    ; 0045db9f
    CMP EAX,0x1                         ; 0045dba5
    JG 0x0045db96                       ; 0045dba8
        ;   XREF to: 0045db96 (CONDITIONAL_JUMP)  ; LAB_0045db96
    LEA EAX,[EAX]                       ; 0045dbaa
    MOV EAX,dword ptr [ESP + 0x44]      ; 0045dbb0
        ;   Label: LAB_0045dbb0
    MOV ESI,dword ptr [ESP + 0x44]      ; 0045dbb4
    MOV EAX,dword ptr [EAX + 0x1c60]    ; 0045dbb8
    MOV dword ptr [ESI + 0x1cc8],0x8    ; 0045dbbe
    MOV dword ptr [ESI + 0x1c64],EAX    ; 0045dbc8
    MOV EAX,dword ptr [ESI + 0x1cc0]    ; 0045dbce
    MOV dword ptr [ESI + 0x1ccc],0x8    ; 0045dbd4
    CMP EAX,0x1                         ; 0045dbde
    JLE 0x0045dc10                      ; 0045dbe1
        ;   XREF to: 0045dc10 (CONDITIONAL_JUMP)  ; LAB_0045dc10
    MOV ESI,dword ptr [ESP + 0x44]      ; 0045dbe3
    MOV EBP,dword ptr [ESI + 0x1cc8]    ; 0045dbe7
        ;   Label: LAB_0045dbe7
    MOV EDI,dword ptr [ESI + 0x1ccc]    ; 0045dbed
    INC EBP                             ; 0045dbf3
    INC EDI                             ; 0045dbf4
    MOV dword ptr [ESI + 0x1cc8],EBP    ; 0045dbf5
    SAR EAX,0x1                         ; 0045dbfb
    MOV dword ptr [ESI + 0x1ccc],EDI    ; 0045dbfd
    CMP EAX,0x1                         ; 0045dc03
    JG 0x0045dbe7                       ; 0045dc06
        ;   XREF to: 0045dbe7 (CONDITIONAL_JUMP)  ; LAB_0045dbe7
    LEA EAX,[EAX]                       ; 0045dc08
    MOV EDX,EDX                         ; 0045dc0e
    MOV EAX,dword ptr [ESP + 0x44]      ; 0045dc10
        ;   Label: LAB_0045dc10
    MOV EAX,dword ptr [EAX + 0x1c58]    ; 0045dc14
    CMP EAX,0x100                       ; 0045dc1a
    JGE 0x0045dc50                      ; 0045dc1f
        ;   XREF to: 0045dc50 (CONDITIONAL_JUMP)  ; LAB_0045dc50
    MOV ESI,dword ptr [ESP + 0x44]      ; 0045dc21
    MOV EBP,dword ptr [ESI + 0x1cc8]    ; 0045dc25
        ;   Label: LAB_0045dc25
    MOV EDI,dword ptr [ESI + 0x1ccc]    ; 0045dc2b
    INC EBP                             ; 0045dc31
    INC EDI                             ; 0045dc32
    MOV dword ptr [ESI + 0x1cc8],EBP    ; 0045dc33
    ADD EAX,EAX                         ; 0045dc39
    MOV dword ptr [ESI + 0x1ccc],EDI    ; 0045dc3b
    CMP EAX,0x100                       ; 0045dc41
    JL 0x0045dc25                       ; 0045dc46
        ;   XREF to: 0045dc25 (CONDITIONAL_JUMP)  ; LAB_0045dc25
    LEA EAX,[EAX]                       ; 0045dc48
    MOV EDX,EDX                         ; 0045dc4e
    MOV EAX,dword ptr [ESP + 0x44]      ; 0045dc50
        ;   Label: LAB_0045dc50
    MOV ESI,dword ptr [EAX + 0x1ccc]    ; 0045dc54
    MOV EBP,dword ptr [EAX + 0x1cc8]    ; 0045dc5a
    SUB ESI,EBX                         ; 0045dc60
    SUB EBP,EBX                         ; 0045dc62
    MOV dword ptr [EAX + 0x1ccc],ESI    ; 0045dc64
    MOV dword ptr [EAX + 0x1cc8],EBP    ; 0045dc6a
    MOV EAX,dword ptr [EAX + 0x1c58]    ; 0045dc70
    MOV EBX,dword ptr [ESP + 0x44]      ; 0045dc76
    DEC EAX                             ; 0045dc7a
    MOV EDI,dword ptr [EBX + 0x1c6c]    ; 0045dc7b
    MOV dword ptr [EBX + 0x1c68],EAX    ; 0045dc81
    TEST EDI,EDI                        ; 0045dc87
    JZ 0x0045de27                       ; 0045dc89
        ;   XREF to: 0045de27 (CONDITIONAL_JUMP)  ; LAB_0045de27
    MOV EAX,EDX                         ; 0045dc8f
    MOV dword ptr [ESP + 0xc],EDI       ; 0045dc91
    XOR EBP,EBP                         ; 0045dc95
    SAR EAX,0x8                         ; 0045dc97
    AND EDX,0xff                        ; 0045dc9a
    MOV dword ptr [ESP + 0x10],EBP      ; 0045dca0
    MOV dword ptr [ESP + 0x1c],EAX      ; 0045dca4
    MOV dword ptr [ESP + 0x24],EDX      ; 0045dca8
    MOV EAX,ECX                         ; 0045dcac
    MOV EDX,dword ptr [EBX + 0x1c5c]    ; 0045dcae
    SAR EAX,0x8                         ; 0045dcb4
    AND ECX,0xff                        ; 0045dcb7
    MOV dword ptr [ESP + 0x4],EAX       ; 0045dcbd
    MOV dword ptr [ESP + 0x18],ECX      ; 0045dcc1
    TEST EDX,EDX                        ; 0045dcc5
    JLE 0x0045de13                      ; 0045dcc7
        ;   XREF to: 0045de13 (CONDITIONAL_JUMP)  ; LAB_0045de13
    MOV EAX,0xff                        ; 0045dccd
    MOV EBP,dword ptr [ESP + 0x24]      ; 0045dcd2
    SUB EAX,EBP                         ; 0045dcd6
    MOV dword ptr [ESP + 0x20],EAX      ; 0045dcd8
    MOV EAX,0xff                        ; 0045dcdc
    SUB EAX,ECX                         ; 0045dce1
    MOV dword ptr [ESP + 0x14],EAX      ; 0045dce3
    MOV EAX,dword ptr [ESP + 0x4]       ; 0045dce7
    INC EAX                             ; 0045dceb
    MOV dword ptr [ESP + 0x8],EAX       ; 0045dcec
    MOV EAX,dword ptr [ESP + 0x44]      ; 0045dcf0
        ;   Label: LAB_0045dcf0
    MOV ECX,dword ptr [ESP + 0x10]      ; 0045dcf4
    MOV EBX,dword ptr [ESP + 0x4]       ; 0045dcf8
    MOV EDX,dword ptr [ESP + 0x44]      ; 0045dcfc
    MOV EAX,dword ptr [EAX + 0x1c5c]    ; 0045dd00
    ADD ECX,EBX                         ; 0045dd06
    DEC EAX                             ; 0045dd08
    MOV ESI,dword ptr [EDX + 0x1c58]    ; 0045dd09
    AND ECX,EAX                         ; 0045dd0f
    IMUL ECX,ESI                        ; 0045dd11
    MOV EDX,dword ptr [EDX + 0x1c54]    ; 0045dd14
    MOV EDI,dword ptr [ESP + 0x8]       ; 0045dd1a
    LEA EBX,[EDX + ECX*0x1]             ; 0045dd1e
    MOV ECX,dword ptr [ESP + 0x44]      ; 0045dd21
    AND EAX,EDI                         ; 0045dd25
    MOV EBP,dword ptr [ECX + 0x1c58]    ; 0045dd27
    IMUL EAX,EBP                        ; 0045dd2d
    ADD EDX,EAX                         ; 0045dd30
    MOV dword ptr [ESP + 0x2c],EBX      ; 0045dd32
    MOV dword ptr [ESP + 0x28],EDX      ; 0045dd36
    XOR EAX,EAX                         ; 0045dd3a
    TEST EBP,EBP                        ; 0045dd3c
    JLE 0x0045dddb                      ; 0045dd3e
        ;   XREF to: 0045dddb (CONDITIONAL_JUMP)  ; LAB_0045dddb
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0045dd44
    MOV ECX,dword ptr [ESP + 0xc]       ; 0045dd48
    INC EBX                             ; 0045dd4c
    MOV EDX,dword ptr [ESP + 0x44]      ; 0045dd4d
        ;   Label: LAB_0045dd4d
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0045dd51
    MOV EDX,dword ptr [EDX + 0x1c58]    ; 0045dd55
    ADD EDI,EAX                         ; 0045dd5b
    DEC EDX                             ; 0045dd5d
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0045dd5e
    AND EDI,EDX                         ; 0045dd62
    MOV EBP,dword ptr [ESP + 0x20]      ; 0045dd64
    MOVZX ESI,byte ptr [EDI + ESI*0x1]  ; 0045dd68
    IMUL EBP,ESI                        ; 0045dd6c
    MOV ESI,EBX                         ; 0045dd6f
    AND ESI,EDX                         ; 0045dd71
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0045dd73
    MOV dword ptr [ESP],EBP             ; 0045dd77
    MOV DL,byte ptr [EDX + ESI*0x1]     ; 0045dd7a
    MOV EBP,dword ptr [ESP + 0x24]      ; 0045dd7d
    AND EDX,0xff                        ; 0045dd81
    IMUL EDX,EBP                        ; 0045dd87
    ADD EDX,dword ptr [ESP]             ; 0045dd8a
    ADD EDI,dword ptr [ESP + 0x28]      ; 0045dd8d
    MOV EBP,dword ptr [ESP + 0x20]      ; 0045dd91
    MOVZX EDI,byte ptr [EDI]            ; 0045dd95
    IMUL EDI,EBP                        ; 0045dd98
    ADD ESI,dword ptr [ESP + 0x28]      ; 0045dd9b
    MOV EBP,dword ptr [ESP + 0x24]      ; 0045dd9f
    MOVZX ESI,byte ptr [ESI]            ; 0045dda3
    IMUL ESI,EBP                        ; 0045dda6
    ADD ESI,EDI                         ; 0045dda9
    MOV EDI,dword ptr [ESP + 0x14]      ; 0045ddab
    IMUL EDI,EDX                        ; 0045ddaf
    MOV EDX,dword ptr [ESP + 0x18]      ; 0045ddb2
    IMUL EDX,ESI                        ; 0045ddb6
    ADD EDX,EDI                         ; 0045ddb9
    SHR EDX,0x10                        ; 0045ddbb
    MOV dword ptr [ESP],EDX             ; 0045ddbe
    MOV DL,byte ptr [ESP]               ; 0045ddc1
    MOV byte ptr [ECX],DL               ; 0045ddc4
    MOV EDX,dword ptr [ESP + 0x44]      ; 0045ddc6
    INC ECX                             ; 0045ddca
    INC EAX                             ; 0045ddcb
    MOV ESI,dword ptr [EDX + 0x1c58]    ; 0045ddcc
    INC EBX                             ; 0045ddd2
    CMP EAX,ESI                         ; 0045ddd3
    JL 0x0045dd4d                       ; 0045ddd5
        ;   XREF to: 0045dd4d (CONDITIONAL_JUMP)  ; LAB_0045dd4d
    MOV EAX,dword ptr [ESP + 0x44]      ; 0045dddb
        ;   Label: LAB_0045dddb
    MOV ECX,dword ptr [ESP + 0xc]       ; 0045dddf
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045dde3
    MOV ESI,dword ptr [ESP + 0x10]      ; 0045dde7
    MOV EDX,dword ptr [ESP + 0x44]      ; 0045ddeb
    INC EBX                             ; 0045ddef
    INC ESI                             ; 0045ddf0
    MOV EAX,dword ptr [EAX + 0x1c58]    ; 0045ddf1
    MOV EDI,dword ptr [EDX + 0x1c5c]    ; 0045ddf7
    MOV dword ptr [ESP + 0x8],EBX       ; 0045ddfd
    ADD ECX,EAX                         ; 0045de01
    MOV dword ptr [ESP + 0x10],ESI      ; 0045de03
    MOV dword ptr [ESP + 0xc],ECX       ; 0045de07
    CMP ESI,EDI                         ; 0045de0b
    JL 0x0045dcf0                       ; 0045de0d
        ;   XREF to: 0045dcf0 (CONDITIONAL_JUMP)  ; LAB_0045dcf0
    MOV EAX,dword ptr [ESP + 0x44]      ; 0045de13
        ;   Label: LAB_0045de13
    MOV EDX,dword ptr [ESP + 0x44]      ; 0045de17
    MOV EAX,dword ptr [EAX + 0x1c6c]    ; 0045de1b
    MOV dword ptr [EDX + 0x1c54],EAX    ; 0045de21
    MOV ESI,dword ptr [ESP + 0x48]      ; 0045de27
        ;   Label: LAB_0045de27
    MOV EDI,dword ptr [ESP + 0x44]      ; 0045de2b
    ADD ESI,0x8                         ; 0045de2f
    ADD EDI,0x1c74                      ; 0045de32
    PUSH EDI                            ; 0045de38
    MOV AL,byte ptr [ESI]               ; 0045de39
        ;   Label: LAB_0045de39
    MOV byte ptr [EDI],AL               ; 0045de3b
    CMP AL,0x0                          ; 0045de3d
    JZ 0x0045de51                       ; 0045de3f
        ;   XREF to: 0045de51 (CONDITIONAL_JUMP)  ; LAB_0045de51
    MOV AL,byte ptr [ESI + 0x1]         ; 0045de41
    ADD ESI,0x2                         ; 0045de44
    MOV byte ptr [EDI + 0x1],AL         ; 0045de47
    ADD EDI,0x2                         ; 0045de4a
    CMP AL,0x0                          ; 0045de4d
    JNZ 0x0045de39                      ; 0045de4f
        ;   XREF to: 0045de39 (CONDITIONAL_JUMP)  ; LAB_0045de39
    POP EDI                             ; 0045de51
        ;   Label: LAB_0045de51
    ADD ESP,0x30                        ; 0045de52
    POP EBP                             ; 0045de55
    POP EDI                             ; 0045de56
    POP ESI                             ; 0045de57
    POP EBX                             ; 0045de58
    RET                                 ; 0045de59

