; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint core_dimage_cpp_FUN_0045f130(undefined4 param_1,uint param_2,uint param_3,uint param_4)
;
;
; XREF[1]:
;   core_dimage.cpp_FUN_0045f18e at 0045f32a
;
; Referenced Globals:
;   undefined4 DAT_01c4e9d4
;   undefined4 DAT_01c4e9d8
;   undefined4 DAT_01c4e9e0
;   undefined4 DAT_01c4e9e4
;   undefined4 DAT_01c4e9ec
;   undefined4 DAT_01c4e9f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045f130
        ;   Label: core_dimage.cpp_FUN_0045f130
    PUSH ESI                            ; 0045f131
    PUSH EDI                            ; 0045f132
    MOV EDI,dword ptr [ESP + 0x14]      ; 0045f133
    MOV EBX,dword ptr [ESP + 0x18]      ; 0045f137
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045f13b
    MOV ECX,dword ptr [0x01c4e9d8]      ; 0045f13f | DAT_01c4e9d8
    MOV EAX,EDI                         ; 0045f145
    XOR EDX,EDX                         ; 0045f147
    DIV ECX                             ; 0045f149
    MOV EDI,EAX                         ; 0045f14b
    XOR EDX,EDX                         ; 0045f14d
    MOV EAX,EBX                         ; 0045f14f
    MOV EBX,dword ptr [0x01c4e9e4]      ; 0045f151 | DAT_01c4e9e4
    DIV EBX                             ; 0045f157
    MOV EBX,EAX                         ; 0045f159
    XOR EDX,EDX                         ; 0045f15b
    MOV EAX,ESI                         ; 0045f15d
    DIV dword ptr [0x01c4e9f0]          ; 0045f15f | DAT_01c4e9f0
    MOV CL,byte ptr [0x01c4e9d4]        ; 0045f165 | DAT_01c4e9d4
    SHL EDI,CL                          ; 0045f16b
    MOV CL,byte ptr [0x01c4e9e0]        ; 0045f16d | DAT_01c4e9e0
    SHL EBX,CL                          ; 0045f173
    MOV CL,byte ptr [0x01c4e9ec]        ; 0045f175 | DAT_01c4e9ec
    OR EBX,EDI                          ; 0045f17b
    SHL EAX,CL                          ; 0045f17d
    OR EAX,EBX                          ; 0045f17f
    POP EDI                             ; 0045f181
    POP ESI                             ; 0045f182
    POP EBX                             ; 0045f183
    RET                                 ; 0045f184

