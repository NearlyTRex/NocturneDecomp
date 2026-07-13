; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_0052c870(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0052c870
        ;   Label: FUN_0052c870
    XOR EDX,EDX                         ; 0052c873
    MOV ECX,0xbff00000                  ; 0052c875
    MOV EAX,EDX                         ; 0052c87a
    MOV dword ptr [ESP],EDX             ; 0052c87c
    MOV dword ptr [ESP + 0x4],ECX       ; 0052c87f
    MOV EDX,ECX                         ; 0052c883
    ADD ESP,0x8                         ; 0052c885
    RET                                 ; 0052c888

