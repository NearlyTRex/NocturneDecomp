; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToScreenCoord_FUN_00441150(CDemonCamera *this_ptr,CVector3i *input_ptr,CVector3i *output_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   input_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441150
        ;   Label: core_dcamera.cpp_CDemonCamera_worldToScreenCoord_FUN_00441150
    PUSH EDI                            ; 00441151
    SUB ESP,0xc                         ; 00441152
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00441155
    MOV ECX,ESI                         ; 00441159
    MOV ESI,dword ptr [ESP + 0x18]      ; 0044115b
    MOV EAX,dword ptr [EDI + 0x8]       ; 0044115f
    MOV EDX,dword ptr [ESI + 0x1c8]     ; 00441162
    MOV dword ptr [ESP + 0x8],EAX       ; 00441168
    MOV EAX,dword ptr [EDI]             ; 0044116c
    MOV EBX,dword ptr [ESI + 0x1c0]     ; 0044116e
    SUB EAX,EDX                         ; 00441174
    MOV EDX,dword ptr [ESP + 0x8]       ; 00441176
    IMUL EDX                            ; 0044117a
    IDIV EBX                            ; 0044117c
    MOV dword ptr [ESP],EAX             ; 0044117e
    MOV EBX,dword ptr [ESI + 0x1c4]     ; 00441181
    MOV EDX,dword ptr [EDI + 0x8]       ; 00441187
    MOV EAX,dword ptr [EDI + 0x4]       ; 0044118a
    MOV EDI,dword ptr [ESI + 0x1cc]     ; 0044118d
    MOV ESI,ESP                         ; 00441193
    SUB EAX,EDI                         ; 00441195
    MOV EDI,ECX                         ; 00441197
    IMUL EDX                            ; 00441199
    IDIV EBX                            ; 0044119b
    MOV dword ptr [ESP + 0x4],EAX       ; 0044119d
    MOVSD ES:EDI,ESI                    ; 004411a1
    MOVSD ES:EDI,ESI                    ; 004411a2
    MOVSD ES:EDI,ESI                    ; 004411a3
    MOV EAX,ECX                         ; 004411a4
    ADD ESP,0xc                         ; 004411a6
    POP EDI                             ; 004411a9
    POP EBX                             ; 004411aa
    RET                                 ; 004411ab

