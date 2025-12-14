; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453020(CDemonCamera * this_ptr, int plane_index)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   plane_index
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 at 00452cf6
;
; Referenced Globals:
;   undefined4 DAT_013da774+3
;   SFogImagePlane g_CameraPlaneWorkBuffer
;   undefined4 DAT_013da779
;   undefined4 DAT_013da77a
;   undefined4 DAT_013da8b7
;   undefined4 DAT_013da8b8
;   undefined4 DAT_013da8b9
;   undefined4 DAT_013da8ba
;   undefined4 DAT_013da9f9
;   undefined4 DAT_013ed377
;   SFogImagePlane[16] g_CameraImageDecompressBuffer
;   undefined4 DAT_013ed379
;   undefined4 DAT_013ed37a
;   undefined4 DAT_013ed4b8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453020
        ;   Label: core_dcamera.cpp_CDemonCamera_copyFogPlaneToBuffer_FUN_00453020
    PUSH ESI                            ; 00453021
    PUSH EDI                            ; 00453022
    PUSH EBP                            ; 00453023
    MOV ESI,dword ptr [ESP + 0x14]      ; 00453024
    MOV EDX,dword ptr [ESP + 0x18]      ; 00453028
    LEA EAX,[EDX*0x4 + 0x0]             ; 0045302c
    ADD EAX,EDX                         ; 00453033
    SHL EAX,0xa                         ; 00453035
    MOV EDX,EAX                         ; 00453038
    SHL EAX,0x4                         ; 0045303a
    SUB EAX,EDX                         ; 0045303d
    MOV EDI,0x1                         ; 0045303f
    LEA EBP,[EAX + 0x140]               ; 00453044
    MOV EAX,dword ptr [ESI + 0x154]     ; 0045304a
        ;   Label: LAB_0045304a
    DEC EAX                             ; 00453050
    CMP EDI,EAX                         ; 00453051
    JGE 0x0045308a                      ; 00453053
        ;   XREF to: 0045308a (CONDITIONAL_JUMP)  ; LAB_0045308a
    IMUL ECX,EDI,0x140                  ; 00453055
    MOV EDX,0x1                         ; 0045305b
    LEA EAX,[EDX + EBP*0x1]             ; 00453060
    ADD ECX,EDX                         ; 00453063
    MOV EBX,dword ptr [ESI + 0x150]     ; 00453065
        ;   Label: LAB_00453065
    DEC EBX                             ; 0045306b
    CMP EDX,EBX                         ; 0045306c
    JGE 0x00453081                      ; 0045306e
        ;   XREF to: 00453081 (CONDITIONAL_JUMP)  ; LAB_00453081
    INC EAX                             ; 00453070
    MOV BL,byte ptr [ECX + 0x13da778]   ; 00453071 | DAT_013da8b9 | DAT_013da8ba | DAT_013da9f9
    INC ECX                             ; 00453077
    INC EDX                             ; 00453078
    MOV byte ptr [EAX + 0x13ed377],BL   ; 00453079 | DAT_013ed377 | DAT_013ed379 | DAT_013ed37a
    JMP 0x00453065                      ; 0045307f
        ;   XREF to: 00453065 (UNCONDITIONAL_JUMP)  ; LAB_00453065
    INC EDI                             ; 00453081
        ;   Label: LAB_00453081
    ADD EBP,0x140                       ; 00453082
    JMP 0x0045304a                      ; 00453088
        ;   XREF to: 0045304a (UNCONDITIONAL_JUMP)  ; LAB_0045304a
    MOV EDX,dword ptr [ESI + 0x154]     ; 0045308a
        ;   Label: LAB_0045308a
    XOR EAX,EAX                         ; 00453090
    TEST EDX,EDX                        ; 00453092
    JLE 0x004530f0                      ; 00453094
        ;   XREF to: 004530f0 (CONDITIONAL_JUMP)  ; LAB_004530f0
    MOV ECX,dword ptr [ESP + 0x18]      ; 00453096
    LEA EDX,[ECX*0x4 + 0x0]             ; 0045309a
    ADD EDX,ECX                         ; 004530a1
    SHL EDX,0xa                         ; 004530a3
    MOV ECX,EDX                         ; 004530a6
    SHL EDX,0x4                         ; 004530a8
    SUB EDX,ECX                         ; 004530ab
    IMUL EBX,EAX,0x140                  ; 004530ad
        ;   Label: LAB_004530ad
    MOV CL,byte ptr [EBX + 0x13da778]   ; 004530b3 | g_CameraPlaneWorkBuffer | DAT_013da8b8
    MOV byte ptr [EDX + 0x13ed378],CL   ; 004530b9 | g_CameraImageDecompressBuffer | DAT_013ed4b8
    MOV ECX,dword ptr [ESI + 0x150]     ; 004530bf
    MOV BL,byte ptr [ECX + EBX*0x1 + 0x13da777] ; 004530c5 | DAT_013da774+3 | DAT_013da8b7
    MOV byte ptr [ECX + EDX*0x1 + 0x13ed377],BL ; 004530cc | DAT_013ed377
    INC EAX                             ; 004530d3
    MOV ECX,dword ptr [ESI + 0x154]     ; 004530d4
    ADD EDX,0x140                       ; 004530da
    CMP EAX,ECX                         ; 004530e0
    JL 0x004530ad                       ; 004530e2
        ;   XREF to: 004530ad (CONDITIONAL_JUMP)  ; LAB_004530ad
    LEA EAX,[EAX]                       ; 004530e4
    LEA EDX,[EDX]                       ; 004530ea
    MOV EDX,dword ptr [ESP + 0x18]      ; 004530f0
        ;   Label: LAB_004530f0
    LEA EDI,[EDX*0x4 + 0x0]             ; 004530f4
    ADD EDI,EDX                         ; 004530fb
    SHL EDI,0xa                         ; 004530fd
    MOV EDX,EDI                         ; 00453100
    SHL EDI,0x4                         ; 00453102
    MOV EAX,0x1                         ; 00453105
    SUB EDI,EDX                         ; 0045310a
    MOV EBP,0xffffffff                  ; 0045310c
    LEA EDX,[EDI + EAX*0x1]             ; 00453111
    MOV ECX,dword ptr [ESI + 0x150]     ; 00453114
        ;   Label: LAB_00453114
    ADD ECX,EBP                         ; 0045311a
    CMP EAX,ECX                         ; 0045311c
    JGE 0x00452f72                      ; 0045311e
        ;   XREF to: 00452f72 (CONDITIONAL_JUMP)  ; LAB_00452f72
    MOV BL,byte ptr [EAX + 0x13da778]   ; 00453124 | DAT_013da779 | DAT_013da77a
    MOV byte ptr [EDX + 0x13ed378],BL   ; 0045312a | g_CameraImageDecompressBuffer | DAT_013ed379 | DAT_013ed37a
    MOV ECX,dword ptr [ESI + 0x154]     ; 00453130
    DEC ECX                             ; 00453136
    IMUL ECX,ECX,0x140                  ; 00453137
    LEA EBX,[ECX + EAX*0x1]             ; 0045313d
    INC EAX                             ; 00453140
    ADD ECX,EDI                         ; 00453141
    MOV BL,byte ptr [EBX + 0x13da778]   ; 00453143 | DAT_013da779 | DAT_013da77a
    INC EDX                             ; 00453149
    MOV byte ptr [ECX + EAX*0x1 + 0x13ed377],BL ; 0045314a | DAT_013ed379 | DAT_013ed37a
    JMP 0x00453114                      ; 00453151
        ;   XREF to: 00453114 (UNCONDITIONAL_JUMP)  ; LAB_00453114

